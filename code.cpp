#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <ctime>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void hideCursor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo = { 1, FALSE };
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}

class SpaceShooter {
private:
    int width, height;
    int x, y;
    int score;
    bool gameover;

    struct Coordinate {
        int x, y;
    };

    vector<Coordinate> bullets;
    vector<Coordinate> enemies;

public:
    SpaceShooter(int width, int height)
        : width(width), height(height), x(width / 2), y(height -1), score(0), gameover(false) {}

    void drawPlayer() {
        gotoxy(x - 1, y - 2); cout << "/^\\ ";
        gotoxy(x - 2, y - 1); cout << "|___|";
    }

    void erasePlayer() {
        gotoxy(x - 1, y - 2); cout << "      ";
        gotoxy(x - 2, y - 1); cout << "      ";
    }

    void moveLeft() {
        if (x > 4) x--;
    }

    void moveRight() {
        if (x < width - 5) x++;
    }

    void shoot() {
        bullets.push_back({ x, y - 3 });
        Beep(600, 50);
    }

    void drawBullets() {
        for (auto& b : bullets) {
            gotoxy(b.x, b.y); cout << "|";
        }
    }

    void moveBullets() {
        // Vector to store bullets to be removed
        vector<int> bulletsToErase;

        for (int i = 0; i < bullets.size(); i++) {
            bullets[i].y--;

            // Check for collision with enemies
            for (int j = 0; j < enemies.size(); j++) {
                // Check if bullet is within the range of the enemy ship
                if (bullets[i].x >= enemies[j].x - 2 && bullets[i].x <= enemies[j].x + 2 &&
                    bullets[i].y == enemies[j].y) {
                    // If a bullet hits an enemy, add both to be removed
                    bulletsToErase.push_back(i);
                    enemies.erase(enemies.begin() + j);

                    score += 10;  // Increase score
                    Beep(800, 100);  // Sound effect
                    break;  // Exit inner loop to avoid invalid access
                }
            }

            // Remove the bullet if it goes off-screen
            if (bullets[i].y <= 0) {
                bulletsToErase.push_back(i);
            }
        }

        // Erase bullets from the list
        // Remove bullets after checking all bullets for collisions
        for (int i = bulletsToErase.size() - 1; i >= 0; i--) {
            bullets.erase(bullets.begin() + bulletsToErase[i]);
        }
    }

    void drawEnemies() {
        for (auto& e : enemies) {
            gotoxy(e.x -2, e.y); cout << "-----"; // Simple line for enemy ship
        }
    }

    void moveEnemies() {
        for (int i = 0; i < enemies.size(); i++) {
            enemies[i].y++;

            // Check for collision with the player's spaceship
            if ((enemies[i].y == y - 2 || enemies[i].y == y - 1 || enemies[i].y == y) &&
                (enemies[i].x >= x - 3 && enemies[i].x <= x + 3)) {
                gameover = true;
                return;
            }

            if (enemies[i].y >= height - 1) {
                enemies.erase(enemies.begin() + i);
                i--;
            }
        }
    }

    void generateEnemies() {
        if (rand() % 100 < 8) {
            int enemyX = rand() % (width - 5) + 3;
            enemies.push_back({ enemyX, 1 });
        }
    }
    
    void displayScore() {
        gotoxy(2, height - 1);
        cout << " Score: " << score << " ";
    }
    
    bool isGameOver() const { return gameover; }
    int getScore() const { return score; }
};
    
int main() {
    system("mode con: lines=40 cols=60");
    hideCursor();
    srand((unsigned)time(0));

    int width = 60, height = 40;
    SpaceShooter game(width, height);

    cout << "Instructions:\n";
    cout << "Use A/D or Left/Right Arrow keys to move.\n";
    cout << "Space to fire, Esc to quit.\n\n";
    
    system("pause");

    while (!game.isGameOver()) {
        game.erasePlayer();
        game.drawPlayer();
        game.drawBullets();
        game.drawEnemies();
        game.displayScore();

        if (_kbhit()) {
            char ch = _getch();
            if (ch == 'a' || ch == 75) game.moveLeft();      // left
            else if (ch == 'd' || ch == 77) game.moveRight(); // right
            else if (ch == ' ') game.shoot();
            else if (ch == 27) break; // ESC
        }

        game.generateEnemies();
        game.moveBullets();
        game.moveEnemies();

        Sleep(80);
        system("cls");
    }

    gotoxy(width / 2 - 5, height / 2);
    cout << "GAME OVER!";
    gotoxy(width / 2 - 7, height / 2 + 1);
    cout << "Your Score: " << game.getScore();
    gotoxy(0, height); // move cursor below
    return 0;
}

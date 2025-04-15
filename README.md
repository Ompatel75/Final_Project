# 🚀 SPACE SHOOTER 2D - TERMINAL EDITION  
> An immersive ASCII space battle written entirely in C++ using Windows Console API

---

## *🎮 Game Overview*

Welcome to *Space Shooter, a fast-paced, retro-style shooting game crafted entirely in the **Windows terminal* using *C++*.  
Your mission: *Destroy enemy invaders, **dodge attacks, and **score high* while defending your position in the galaxy.

Rendered in ASCII, powered by gotoxy() and real-time logic — this terminal game is light, responsive, and addictive!

---


## *🧰 Technologies Used*

- *C++17*  
- *Windows Console API* (windows.h)
- *Console Keyboard Input* (conio.h)
- *Cursor Control* with gotoxy()  
- *Sleep & Delay* for animations (Sleep())  
- *Dynamic Data Structures* (std::vector)
- *System Commands* for terminal formatting (system("cls"), system("pause"))

---

## *🗂 Data Structures Used*

### std::vector
Used for both:
- *Bullets*  
- *Enemies*

Benefits:
- Allows dynamic addition and removal of elements
- Helps manage fast-paced real-time updates
- No manual memory management required

### struct Coordinate
A simple structure to represent 2D positions (x, y) for bullets and enemies:
```cpp
struct Coordinate {
    int x, y;
};

# 🚀 SPACE SHOOTER 2D - TERMINAL EDITION  
> An immersive ASCII space battle written entirely in C++ using Windows Console API

---

## *🎮 Game Overview*

Welcome to *Space Shooter, a retro-style, fast-paced arcade game that runs directly in your **Windows terminal*. Built purely in C++ with no external graphics libraries, this game recreates the nostalgic vibe of classic shooting games — in ASCII art!

You are the lone defender of the galaxy. Your mission is simple:  
*Dodge enemies, shoot them down, and survive as long as you can.*

---

## *🧰 Technologies Used*

- *C++*  
- *Windows Console API* (windows.h)  
- *Keyboard Input* (conio.h)  
- *Real-time animation* using Sleep() and cursor manipulation  
- *Dynamic data structures* via std::vector  

---

## *🕹 Controls*

| Key       | Action            |
|-----------|-------------------|
| A       | Move Left         |
| D       | Move Right        |
| Space   | Shoot Bullet      |
| Esc     | Quit Game         |

---

## *📦 Setup Instructions*

### *1. Requirements*
- OS: Windows (uses <windows.h>)
- C++ Compiler (e.g., *g++* or *MSVC*)

### *2. Clone & Compile*
```bash
git clone https://github.com/your-username/space-shooter-cpp.git
cd space-shooter-cpp
g++ space_shooter.cpp -o space_shooter

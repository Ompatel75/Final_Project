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

## *🗂 Data Structures Used*

### std::vector
- *Bullets* and *Enemies* are stored using std::vector:
    - Allows *dynamic resizing*
    - Efficient *insertions* and *deletions*
    - Simplifies memory management
- Structure of objects stored:
```cpp
struct Coordinate {
    int x, y;
};

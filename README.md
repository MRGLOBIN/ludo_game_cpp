# Ludo Game (C++ & WinBGIm)

A fully-featured, classic Ludo game built from scratch using C++ and the WinBGIm (`graphics.h`) graphics library. It supports 2 to 4 multiplayer modes and simulates physical Ludo with interactive dice rolls, animated pawns, custom GUI menus, and sound effects!

## Screenshots / Interface
The game features a rich graphical menu, a "How to Play" screen, player selection with graphical avatars, and the traditional 4-colored Ludo board complete with safe zones, start points, and final paths.

## 🛠️ System Requirements
This is a **Windows-only** graphical application because it relies on the Windows API for the `graphics.h` (WinBGIm) implementation.

- **Operating System:** Windows 7 / 8 / 10 / 11
- **Compiler:** MinGW GCC Toolkit (32-bit recommended for WinBGIm compatibility)
- **IDE (Recommended):** Code::Blocks (the `.cbp` project file is included in the source)
- **Library:** WinBGIm (must be configured with your MinGW / Code::Blocks installation)

## 🚀 How to Build and Run
**Important:** This project uses a custom, modified version of the `graphics.h` (WinBGIm) library that supports extended 256-bit colors (upgraded from the original 8-bit colors).

1. Download the `MinGW-compiler.zip` folder from the **Releases** section of this GitHub repository and extract it to a memorable location. This zip contains the pre-configured MinGW compiler with the enhanced `graphics.h` already installed.
2. Set up Code::Blocks to use this specific extracted MinGW compiler in your toolchain executables settings.
3. Open the `learn.cbp` project file using Code::Blocks.
4. Hit **Build and Run** (or press F9).
5. The game window will launch right away with rich colors!

## 🎲 How to Play
- **Main Menu**: First, choose the mode you would like to play (2 Players, 3 Players, or 4 Players).
- **Player Options**: If you choose 2 or 3 Players, you will be prompted to individually pick your preferred team colors.
- **Rules**: 
  - Players take turns moving in a clockwise order based on dice throws.
  - A score of **6** is needed to release a pawn from the home base.
  - If a pawn lands on a square occupied by an opponent's pawn, the opponent's pawn is eliminated and sent back home.
  - Safespots are drawn on the board to protect pieces from elimination.
  - A pawn enters its "Home" when it successfully navigates the entire track. The first to get all pieces home wins!

## 👨‍💻 Developers (Group G)
This project was conceptualized, designed, and developed by:
- **Syed Abdul Basit Kazmi** - Supervisor (Air University)
- **Muhammad Asim** - Project Architect
- **Muhammad Ahmed** - Project Visual Manager
- **Syed Shayan Ali Shah** - Project Logic Manager

## 📚 Resources & Documentation
- **WinBGIm (`graphics.h`) API Reference**: [https://winbgim.codecutter.org/V6_0/doc/](https://winbgim.codecutter.org/V6_0/doc/)

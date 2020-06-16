# Rubiks cube

![Title cube](img/title_cube.png?raw=true "Title cube")

Project completed during a Computer Graphics course. Written in pure C++ using only GLU library for Win32 platform. Why such ascetic choice of tools? Because I was bored.

![Title cube gif](img/title_cube.gif?raw=true "Title cube gif")

## Features

- Rotating cube faces. Since I used Euler angles instead of quaternions only 4 rotation directions work correctly
- Camera movement
- Lighting
- Dynamic texture loading
- Horrible auto-generated `rubik.cpp` file. Please don't open it.

## Release

Check latest and single release.

Controls:

- WASD, QE, ZX - various camera controls
- C - move light source
- 1, 2, 3, 4 - rotate faces
- F1 - load .bmp texture
- Ctrl - secret button to rotate top face
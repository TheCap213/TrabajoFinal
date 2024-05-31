/*
#include <iostream>

using namespace System;
using namespace std;

const int WIDTH = 145;
const int HEIGHT = 41;
*/

//bordes con linea central 
/*
void dibujarBordes() {
    for (int i = 0; i < HEIGHT; ++i) {
        Console::SetCursorPosition(0, i);
        if (i == 0 || i == 34 || i == HEIGHT - 1) {
            for (int j = 0; j < WIDTH; ++j) {
                cout << (char)219;
            }
        }
        else {
            cout << (char)219;
            Console::SetCursorPosition(WIDTH - 1, i);
            cout << (char)219;
        }
    }
}
*/

/*
//bordes sin linea central
void dibujarBordes() {
    for (int i = 0; i < HEIGHT; ++i) {
        Console::SetCursorPosition(0, i);
        if (i == 0 || i == HEIGHT - 1) {
            for (int j = 0; j < WIDTH; ++j) {
                cout << (char)219;
            }
        }
        else {
            cout << (char)219;
            Console::SetCursorPosition(WIDTH - 1, i);
            cout << (char)219;
        }
    }
}

void dibujar() {
    Console::Clear();
    dibujarBordes();
}

int main() {
    dibujar();
    cin.ignore();
    system("pause");
    return 0;
}
*/
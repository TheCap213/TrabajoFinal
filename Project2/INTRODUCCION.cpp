/*
#include <iostream>
#include "upc.h"
using namespace std;
using namespace System;

const int WIDTH = 145;
const int HEIGHT = 41;

void dibujarBordes() {
    for (int i = 0; i < HEIGHT; ++i) {
        Console::SetCursorPosition(0, i);
        if (i == 0 || i == HEIGHT - 1) {
            for (int j = 0; j < WIDTH; ++j) {
                foreground(BRIGHT_YELLOW); cout << (char)219; foreground(WHITE);
            }
        }
        else {
            foreground(BRIGHT_YELLOW);
            cout << (char)219;
            Console::SetCursorPosition(WIDTH - 1, i);
            cout << (char)219;
            foreground(WHITE);
        }
    }
}


void presentacion() {
   
    color(BRIGHT_YELLOW); 
    Console::SetCursorPosition(44, 7); cout << " _______ _           ";
    Console::SetCursorPosition(44, 8); cout << "|__   __| |          ";
    Console::SetCursorPosition(44, 9); cout << "   | |  | |__   ___  ";
    Console::SetCursorPosition(44, 10); cout << "   | |  | '_ \\ / _ \\";
    Console::SetCursorPosition(44, 11); cout << "   | |  | | | |  __/ ";
    Console::SetCursorPosition(44, 12); cout << "   |_|  |_| |_|\\___| ";  
    color(WHITE); 
 
    // Letra C de color Azul
    color(DARK_BLUE);  
    Console::SetCursorPosition(65, 7); cout << "  _____ ";
    Console::SetCursorPosition(65, 8); cout << " / ____|";
    Console::SetCursorPosition(65, 9); cout << "| |   ";
    Console::SetCursorPosition(65, 10); cout << "| |   ";
    Console::SetCursorPosition(65, 11); cout << "| |____"; 
    Console::SetCursorPosition(65, 12); cout << " \\_____";
    color(WHITE); 

    // Letra R de color celeste 
    color(DARK_CYAN);   
    Console::SetCursorPosition(72, 9); cout << " _ __";
    Console::SetCursorPosition(72, 10); cout << "| '__";
    Console::SetCursorPosition(72, 11); cout << "| | ";
    Console::SetCursorPosition(72, 12); cout << "|_| ";
    color(WHITE); 

    // Letra Y de color cyan 
    color(BRIGHT_CYAN);  
    Console::SetCursorPosition(77, 9); cout << " _   _"; 
    Console::SetCursorPosition(77, 10); cout << "| | | "; 
    Console::SetCursorPosition(77, 11); cout << "| |_| "; 
    Console::SetCursorPosition(77, 12); cout << " \\__, |"; 
    Console::SetCursorPosition(77, 13); cout << "  __/ |";
    Console::SetCursorPosition(77, 14); cout << " |___/";
    color(WHITE);

    // Letra S de color amarillo 
    color(DARK_YELLOW);
    Console::SetCursorPosition(83, 9); cout << " ___";
    Console::SetCursorPosition(83, 10); cout << "/ __";
    Console::SetCursorPosition(83, 11); cout << "\\__ \\";
    Console::SetCursorPosition(84, 12); cout << "___/";
    color(WHITE);
    
    // Letra T de color rojo 
    color(DARK_RED);
    Console::SetCursorPosition(87, 7); cout << " _ ";
    Console::SetCursorPosition(87, 8); cout << "| |";
    Console::SetCursorPosition(87, 9); cout << "| |_";
    Console::SetCursorPosition(87, 10); cout << "| __";
    Console::SetCursorPosition(88, 11); cout << " ||";
    Console::SetCursorPosition(88, 12); cout << "\\__";
    color(WHITE);

    // Letra A de color verde 
    color(BRIGHT_GREEN);
    Console::SetCursorPosition(91, 9); cout << " __ _";
    Console::SetCursorPosition(91, 10); cout << "/ _` ";
    Console::SetCursorPosition(91, 11); cout << " (_| ";
    Console::SetCursorPosition(91, 12); cout << "\\__,_";
    color(WHITE);

    // Letra L de color magenta 
    color(DARK_MAGENTA);
    Console::SetCursorPosition(96, 7); cout << " _ ";
    Console::SetCursorPosition(96, 8); cout << "| |";
    Console::SetCursorPosition(96, 9); cout << "| |";
    Console::SetCursorPosition(96, 10); cout << "| ";
    Console::SetCursorPosition(96, 11); cout << "| ";
    Console::SetCursorPosition(96, 12); cout << "|_|";
    color(WHITE);

    // Letra S de color purpura 
    color(BRIGHT_MAGENTA);
    Console::SetCursorPosition(99, 9); cout << "___";
    Console::SetCursorPosition(98, 10); cout << "/ __|";
    Console::SetCursorPosition(98, 11); cout << "\\__ \\";
    Console::SetCursorPosition(99, 12); cout << "___/";
    color(WHITE);

    int n;

    color(BRIGHT_YELLOW);  
    Console::SetCursorPosition(55, 14); cout << "  ____      _  ";
    Console::SetCursorPosition(55, 15); cout << " / __ \\    | |";
    Console::SetCursorPosition(55, 16); cout << "| |  | | __| |_   _ ___ ___  ___ _   _ ";
    Console::SetCursorPosition(55, 17); cout << "| |  | |/ _` | | | / __/ __|/ _ \\ | | |";
    Console::SetCursorPosition(55, 18); cout << "| |__| | (_| | |_| \\__ \\__ \\  __/ |_| |";
    Console::SetCursorPosition(55, 19); cout << " \\____/ \\__,_|\\__, |___/___/\\___|\\__, |";
    Console::SetCursorPosition(55, 20); cout << "               __/ |              __/ |";
    Console::SetCursorPosition(55, 21); cout << "              |___/              |___/ ";
    color(WHITE); 
    
    color(DARK_YELLOW);
    Console::SetCursorPosition(38, 23); cout << "    - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -    ";
    Console::SetCursorPosition(66, 24); cout << "[1] PLAY";
    Console::SetCursorPosition(66, 26); cout << "[2] CREDITS";
    Console::SetCursorPosition(66, 28); cout << "[3] EXIT";
    Console::SetCursorPosition(64, 30); cout << ">>";
    color(WHITE);  
    Console::SetCursorPosition(67, 30); cin >> n;


}

int main() {
    dibujarBordes();
    presentacion();
    _getch();
    system("pause");
    return 0;
}
*/
//includes generales
#include <iostream>
#include "upc.h"

using namespace std;
using namespace System;  

//>>>>>LOGO INCIAL DE LA UPC<<<<<

void logoUPC() {
	
    hideCursor();
    foreground(DARK_RED);
	Console::SetCursorPosition(49, 11); cout << "                   ##                          ";
	Console::SetCursorPosition(49, 12); cout << "                 ,###.                         ";
	Console::SetCursorPosition(49, 13); cout << "       #         #####*                #       ";
	Console::SetCursorPosition(49, 14); cout << "    .#/         #######                 /#.    ";
	Console::SetCursorPosition(49, 15); cout << "   ##*         #########.                *##   ";
	Console::SetCursorPosition(49, 16); cout << " .###          ############               ###. ";
	Console::SetCursorPosition(49, 17); cout << " ###(          #############(             (### ";
	Console::SetCursorPosition(49, 18); cout << "#####           #############(            #####";
	Console::SetCursorPosition(49, 19); cout << "#####            *############            #####";
	Console::SetCursorPosition(49, 20); cout << "######              ##########.          ######";
	Console::SetCursorPosition(49, 21); cout << "#######               ########          #######";
	Console::SetCursorPosition(49, 22); cout << "(########              (#####         ########(";
	Console::SetCursorPosition(49, 23); cout << " ##########             ####        ########## ";
	Console::SetCursorPosition(49, 24); cout << "  #############         (##     #############  ";
	Console::SetCursorPosition(49, 25); cout << "   /#######################################/   ";
	Console::SetCursorPosition(49, 26); cout << "     (###################################(     ";
	Console::SetCursorPosition(49, 27); cout << "        ###############################        ";
	Console::SetCursorPosition(49, 28); cout << "           (#######################(           ";
	Console::SetCursorPosition(49, 29); cout << "                 /###########/                 ";
	foreground(WHITE);
}

//>>>>>>PRESENTACION<<<<<<

const int WIDTH = 145;
const int HEIGHT = 41;

//dibujamos los vordes por toda la consola
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

//interfas centarl "nombre"
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
    Console::SetCursorPosition(66, 25); cout << "[1] PLAY";
    Console::SetCursorPosition(66, 27); cout << "[2] CREDITS";
    Console::SetCursorPosition(66, 29); cout << "[3] EXIT";
    Console::SetCursorPosition(64, 31); cout << ">>";
    color(WHITE);
    //Console::SetCursorPosition(67, 30); cin >> opcion;
} 
//---------CREDITOS---------
void creditos() {
    color(DARK_YELLOW);

    Console::SetCursorPosition(47, 4); cout << "   __________  __________  ______________  _____";
    Console::SetCursorPosition(47, 5); cout << "  / ____/ __ \\/ ____/ __ \\/  _/_  __/ __ \\/ ___/";
    Console::SetCursorPosition(47, 6); cout << " / /   / /_/ / __/ / / / // /  / / / / / /\\__ \\ ";
    Console::SetCursorPosition(47, 7); cout << "/ /___/ _, _/ /___/ /_ /// /  / / / /_/ /___/ /";
    Console::SetCursorPosition(47, 8); cout << "\\____/_/ |_/_____/_____/___/ /_/  \\____//____/ ";
    Console::SetCursorPosition(45, 10); cout << "--------------------------------------------------";
    Console::SetCursorPosition(58, 12); cout << "JOHAN YONEL LEON MORALES";
    Console::SetCursorPosition(56, 16); cout << "GHIOU JUSTINN MAURICIO SILVA";
    Console::SetCursorPosition(57, 20); cout << "JULIO FRANK QUISPE SERRANO";
    color(WHITE);
}
    //>>>>>>INSTRUCCIONES<<<<<<
    //ARREGLAR LA LETRA TIPO SLANT EN GENERADOR DE ASCII (PENDIENTE)
void introduccion() {
    color(BRIGHT_CYAN);
    Console::SetCursorPosition(43, 10); cout << "   _____  ________________  __  ____________________  _  __________";
    Console::SetCursorPosition(43, 11); cout << "  /  _/ |/ / __/_  __/ _ \\ / / / / ___/ ___/  _/ __ \\/ |/ / __/ __/";
    Console::SetCursorPosition(43, 12); cout << " _/ //    /\\ \\  / / / , _// /_/ / /__/ /___/ // /_/ /    / _/_\\ \\  ";
    Console::SetCursorPosition(43, 13); cout << "/___/_/|_/___/ /_/ /_/|_| \\____/\\___/\\___/___/\\____/_/|_/___/___/";
    Console::SetCursorPosition(39, 15); cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";

    Console::SetCursorPosition(41, 17); cout << "1) ";
    Console::SetCursorPosition(41, 19); cout << "2) ";
    Console::SetCursorPosition(41, 21); cout << "3) ";
    Console::SetCursorPosition(41, 23); cout << "4) ";

    color(WHITE);
}


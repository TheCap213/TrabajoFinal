/*
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <conio.h>
#include "upc.h"

using namespace std;
using namespace System;

void randcolor();
int randnum(int n);

const int largo = 50;
const int ancho = 29;
int posiciones[largo] = { 0 }; // Mantener las posiciones de cada asterisco

int main() {
    srand(time(nullptr));
    hideCursor();

    int x = 40, y = 1;

    // Imprimir primera fila
    for (int i = 0; i < largo; i++) {
        gotoxy(x + i, y);
        cout << " ";  // Dejar en blanco la primera fila
    }

    // Lluvia aleatoria
    while (!_kbhit()) {
        for (int i = 0; i < largo; i++) {
            if (posiciones[i] == 0 && randnum(1000) <= 100) { // 10% de probabilidad de empezar a caer
                posiciones[i] = y + 1; // Inicializar la posición de caída justo debajo de la primera fila
            }

            if (posiciones[i] > y) {
                gotoxy(x + i, posiciones[i] - 1); // Borrar la posición anterior
                cout << ' ';

                randcolor();
                gotoxy(x + i, posiciones[i]); // Dibujar en la nueva posición
                cout << '*';
                clearColor();

                posiciones[i]++;

                if (posiciones[i] > ancho) { // Si el asterisco llega al fondo, reiniciar
                    gotoxy(x + i, posiciones[i] - 1); // Borrar la posición anterior
                    cout << ' ';
                    posiciones[i] = 0;
                }
            }
        }

        Sleep(100); // Controlar la velocidad del bucle
    }

    system("pause");
    return 0;
}

void randcolor() {

    int colorrandom = randnum(5);

    switch (colorrandom)
    {
    case 1:
        color(BRIGHT_BLUE);
        break;
    case 2:
        color(DARK_GREEN);
        break;
    case 3:
        color(DARK_MAGENTA);
        break;
    case 4:
        color(DARK_RED);
        break;
    case 5:
        color(DARK_CYAN);
        break;
    }
}

int randnum(int n) {
    return rand() % n + 1;
}
*/

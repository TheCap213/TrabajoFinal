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

int posiciones[largo] = { 0 }; // Mantiene las posiciones de cada asterisco

int main() {

	srand(time(nullptr)); // Incializa la semilla para los números aleatorios
	hideCursor();

	int x = 40, y = 1; // Posicion para imprimir la lluvia 

	//imprimir fila, no es necesario todo esto xd
	for (int i = 0; i < largo; i++) { // Determinar el recorrido de x de manera horizontal
		gotoxy(x + i, y);   // X que es horizontal avnza en i posicoones a la derecha 
		cout << " ";    // Tambien de que y es constante y en ese recorrido se escribe " "
	}

	//Lluvia aleatoria
	while (!_kbhit()) { //ejecuta el bubcle hasta que se precione una tecla 
		for (int i = 0; i < largo; i++) {
			if (posiciones[i] == 0 && randnum(1000) <= 10) { // 10% de probabilidad de empezar a caer 
				posiciones[i] = y + 1;  // Inicializar la posicion de caida justo debajo de la primera fila
			}
			if (posiciones[i] > y) {
				gotoxy(x + i, posiciones[i] - 1); // Borrar la posición anterior 
				cout << ' ';
			}
 

		}

	}

}
*/
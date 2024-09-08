#include <iostream>
#include "upc.h"
#include "escenarios.h"

//Probando el github xd
//probando segunda ves
using namespace std;

int main() {
    int opcion = 0;
    
    // Mostrar el logo de la UPC
    logoUPC(); 
    Sleep(3000);  // Mostrar el logo por 3 segundos
    clear(); 

    while (true) {
 
        // Mostrar la presentación
        showCursor();
        dibujarBordes();
        presentacion();

        // Leer la opción del usuario
        Console::SetCursorPosition(67, 31); cin >> opcion;

        // Manejar la opción del usuario
        switch (opcion) {
        case 1:
            clear();
            hideCursor();
            dibujarBordes();
            introduccion();
            Console::SetCursorPosition(100, 38); cout << "Presione cualquier tecla para continuar...";
            _getch(); // Esperar a que el usuario presione una tecla
            clear(); 
            break;
        case 2:
            clear();
            hideCursor();
            dibujarBordes();
            creditos();
            Console::SetCursorPosition(96, 38); cout << "Presione cualquier tecla para volver al menu...";
            _getch(); // Esperar a que el usuario presione una tecla
            clear();
            break;
        case 3:
            Console::SetCursorPosition(67, 31); cout << "Saliendo del juego..."; 
            Sleep(2000);
            clear(); 
            return 0; // Salir del programa
        default:
            Console::SetCursorPosition(67, 31); cout << "Opcion invalida. Intente de nuevo.";
            Sleep(2000); // Esperar 2 segundos antes de volver a mostrar el menú
            clear();
        }
    }

    return 0;
}

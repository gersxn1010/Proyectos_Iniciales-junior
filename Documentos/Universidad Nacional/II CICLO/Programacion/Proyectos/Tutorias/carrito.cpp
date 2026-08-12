#include <iostream>
#include <unistd.h>   // usleep()
#include <cstdlib>    // system()
#include <string>

using namespace std;

int main() {
    const int ANCHO = 170;   // ancho de la "pista"
    int posicion = 0;
    int direccion = 1;      // 1 = derecha, -1 = izquierda

    int contador = 0;       // cuenta cuántos frames han pasado

    // Carrito en varias líneas
    string carro[4] = {
        "   ______",
        "  /|_||_\\`.__",
        " (   _    _ _\\",
        " =`-(_)--(_)-'"
    };
    const int ALTO = 4; // cantidad de líneas del carro

    while (true) {
        system("clear"); // limpia la consola en Linux/Mac

        // Calcula el tiempo transcurrido (cada frame dura 150 ms = 0.15 s)
        double tiempo = contador * 0.15;
        cout << "Tiempo transcurrido: " << tiempo << " segundos" << endl;

        // Dibuja la pista con el carrito en su posición actual (varias líneas)
        for (int fila = 0; fila < ALTO; fila++) {
            for (int i = 0; i < posicion; i++) cout << " ";
            cout << carro[fila] << endl;
        }

        // Actualiza posición
        posicion += direccion+9;

        // Si llega a un borde, cambia de dirección
        if (posicion >= ANCHO || posicion <= 0) {
            break;
        }

        contador++;      // suma un frame más
        usleep(150000);  // pausa de 150 ms
    }

    return 0;
}
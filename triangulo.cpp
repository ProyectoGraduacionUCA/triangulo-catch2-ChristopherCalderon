#include <iostream>
using namespace std;

// Función para imprimir un triángulo rectángulo de asteriscos
void imprimirTriangulo(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; // Salto de línea después de cada fila
    }
}

int main() {
    int a, b, c;
    // Leer las alturas de los tres triángulos
    cin >> a >> b >> c;

    // Imprimir los tres triángulos
    imprimirTriangulo(a);
    imprimirTriangulo(b);
    imprimirTriangulo(c);

    return 0;
}

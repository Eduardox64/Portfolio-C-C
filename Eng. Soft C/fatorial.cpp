16:50 18/03/2024#include <iostream>
using namespace std;

void calcularFatorial(int n) {
    int fatorial = 1;

    // Calcular o fatorial
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    // Mostrar o resultado
    cout << "O fatorial de " << n << " é: " << fatorial << endl;
}

int main() {
    int numero;
    cout << "Digite um número para calcular o fatorial: ";
    cin >> numero;

    calcularFatorial(numero);

    return 0;
}

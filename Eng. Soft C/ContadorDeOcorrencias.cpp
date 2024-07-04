#include <iostream>
using namespace std;

void contarOcorrencias(int matriz[][100], int n, int x) {
    int ocorrencias = 0;

    // Percorrer a matriz e contar as ocorrências de x
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == x) {
                ocorrencias++;
            }
        }
    }

    // Mostrar o resultado
    cout << "O numero de ocorrencias de " << x << " na matriz e: " << ocorrencias << endl;
}

int main() {
    int n, x;
    cout << "Digite o tamanho da matriz (n x n): ";
    cin >> n;

    int matriz[100][100]; // Definir matriz com tamanho máximo de 100 x 100

    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Digite o numero para contar as ocorrencias: ";
    cin >> x;

    contarOcorrencias(matriz, n, x);

    return 0;
}

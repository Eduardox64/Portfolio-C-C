#include <iostream>
using namespace std;

void insertionSort(int vetor[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = chave;
    }
}

int main() {
    int n;

    cout << "Informe o tamanho do vetor: ";
    cin >> n;

    int vetor[n];

    cout << "Informe os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    insertionSort(vetor, n);

    cout << "Vetor ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

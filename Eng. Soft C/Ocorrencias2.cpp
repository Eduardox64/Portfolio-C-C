/*Faça um programa que contenha uma função para calcular o número de ocorrências de um número
x em uma matriz n x n. A função deverá receber por passagem de parâmetros a matriz, o seu
tamanho n e o número x. O resultado deverá ser retornado para a função main () para então ser
exibido na tela.*/

#include <iostream>
using namespace std;

void numOcorrencias(int matriz[][100], int n, int x){
    int ocorrencias = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; i < n; i++){
            if (matriz[i][j] == x){
                ocorrencias++;
            }
        }
    }
cout << "O numero de ocorrencias de " << x << " na matriz e: " << ocorrencias;
}

int main(){
    int n, x;
    cout << "Digite o tamanho da matriz (n x n): ";
    cin >> n;

    int matriz[100][100];

    cout << "Digite os numeros que deseja na matriz: ";
    for (int i = 0; i < n; i++){
        for (int j = 0; i < n; i++){
            cin >> matriz [i][j];
        }
    }
    cout << "Digite o numero que deseja contar nas ocorrencias: ";
    cin >> x;

    numOcorrencias(matriz, n, x);

return 0;
}

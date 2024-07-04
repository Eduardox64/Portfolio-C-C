/*Fa�a um programa que contenha uma fun��o para calcular o n�mero de ocorr�ncias de um n�mero
x em uma matriz n x n. A fun��o dever� receber por passagem de par�metros a matriz, o seu
tamanho n e o n�mero x. O resultado dever� ser retornado para a fun��o main () para ent�o ser
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

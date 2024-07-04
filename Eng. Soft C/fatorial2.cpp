/*Fa�a um programa que contenha uma fun��o para determinar o fatorial de um n�mero n. A fun��o
dever� receber o valor n por passagem de par�metro e retornar o resultado para a fun��o main ()
para ser exibido na tela.*/


#include <iostream>
using namespace std;

void calcularFator(int n){

    int fatorial = 1;

    for (int i = 1; i <= n; i++){
        fatorial *= i;
    }

cout << "O fator de " << n << " e " << fatorial;
}

int main(){
    int num;
    cout << "Digite um numero para ser fatorado: ";
    cin >> num;

    calcularFator(num);

return 0;
}

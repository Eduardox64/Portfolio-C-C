/*Faça um programa que contenha uma função para determinar o fatorial de um número n. A função
deverá receber o valor n por passagem de parâmetro e retornar o resultado para a função main ()
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

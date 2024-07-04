#include <iostream>
using namespace std;

class Pilha {
private:
    int* vetor;
    int tamanho;
    int topo;

public:
    Pilha(int n) {
        tamanho = n;
        vetor = new int[n];
        topo = -1;
    }

    ~Pilha() {
        delete[] vetor;
    }

    void push(int elemento) {
        if (topo == tamanho - 1) {
            cout << "Pilha cheia, nao foi possivel inserir." << endl;
            return;
        }
        topo++;
        vetor[topo] = elemento;
        cout << "Elemento inserido na pilha." << endl;
    }

    void pop() {
        if (topo == -1) {
            cout << "Pilha vazia, nao foi possivel remover." << endl;
            return;
        }
        topo--;
        cout << "Elemento removido da pilha." << endl;
    }

    void mostrarElementos() {
        if (topo == -1) {
            cout << "Pilha vazia." << endl;
            return;
        }
        cout << "Elementos da pilha: ";
        for (int i = 0; i <= topo; i++) {
            cout << vetor[i] << " ";
        }
        cout << endl;
    }
};

class Fila {
private:
    int* vetor;
    int tamanho;
    int inicio;
    int fim;

public:
    Fila(int n) {
        tamanho = n;
        vetor = new int[n];
        inicio = -1;
        fim = -1;
    }

    ~Fila() {
        delete[] vetor;
    }

    void enqueue(int elemento) {
        if (fim == tamanho - 1) {
            cout << "Fila cheia, nao foi possivel inserir." << endl;
            return;
        }
        if (inicio == -1) {
            inicio++;
        }
        fim++;
        vetor[fim] = elemento;
        cout << "Elemento inserido na fila." << endl;
    }

    void dequeue() {
        if (inicio == -1) {
            cout << "Fila vazia, nao foi possivel remover." << endl;
            return;
        }
        inicio++;
        if (inicio > fim) {
            inicio = -1;
            fim = -1;
        }
        cout << "Elemento removido da fila." << endl;
    }

    void mostrarElementos() {
        if (inicio == -1) {
            cout << "Fila vazia." << endl;
            return;
        }
        cout << "Elementos da fila: ";
        for (int i = inicio; i <= fim; i++) {
            cout << vetor[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Digite o tamanho do vetor (para Pilha e Fila): ";
    cin >> n;

    Pilha pilha(n);
    Fila fila(n);

    int opcao;
    do {
        cout << "\nMenu:\n1. Inserir elemento na Pilha\n2. Remover elemento da Pilha\n3. Mostrar elementos da Pilha\n";
        cout << "4. Inserir elemento na Fila\n5. Remover elemento da Fila\n6. Mostrar elementos da Fila\n0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            int elementoPilha;
            cout << "Digite o elemento a ser inserido na Pilha: ";
            cin >> elementoPilha;
            pilha.push(elementoPilha);
            break;
        case 2:
            pilha.pop();
            break;
        case 3:
            pilha.mostrarElementos();
            break;
        case 4:
            int elementoFila;
            cout << "Digite o elemento a ser inserido na Fila: ";
            cin >> elementoFila;
            fila.enqueue(elementoFila);
            break;
        case 5:
            fila.dequeue();
            break;
        case 6:
            fila.mostrarElementos();
            break;
        case 0:
            cout << "Saindo do programa." << endl;
            break;
        default:
            cout << "Opcao invalida." << endl;
            break;
        }
    } while (opcao != 0);

    return 0;
}

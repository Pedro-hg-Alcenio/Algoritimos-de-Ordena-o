#include <iostream>
#include <algorithm>
void BubbleSort(int vet[10], int tam) {
    int nw;
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam - 1; ++j) {
            if (vet[j] > vet[j + 1]) {
                std::swap(vet[j], vet[j+1]);
            }
        }
    }
}

void SelectionSort(int vet[10], int tam) {
    int menor;
    for (int i = 0; i < tam; ++i) {
        menor = i;

        for (int j = i + 1; j < tam; ++j) {
            if (vet[j] < vet[menor])
                menor = j;
        }

        std::swap(vet[i], vet[menor]);
    }
}

void Embaralha(int vet[10], int tam) {
    int random, temp;
    for (int i = 0; i < tam; ++i) {
        random = rand() % tam;
        temp = vet[i];
        vet[i] = vet[random];
        vet[random] = temp;
    }
}

void ConsoleOrd(int vet[10], int tam) {
    for (int i = 0; i < tam; ++i) {
        std::cout << vet[i] << std::endl;
    }
}

int main () {
    int vetor[10] = {3,1,5,7,9,4,2,8,10,6};

    // Algoritimo Bubble Sort
    BubbleSort(vetor, 10);

    // Algoritimo Section Sort
    SelectionSort(vetor, 10);

    ConsoleOrd(vetor, 10);
    
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 500000
void Ordenacao_Bolha(int vet[], int tam) {
	int i, j;
    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                // Troca os elementos arr[j] e arr[j+1]
                int temp;
				temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}

void Decrescente(int vetor[], int tam) {
	int i, j;
    for(i = tam-1; i >= 0; i--) {
        int min;
		min = i;

        for (j = tam-1; j >= 0; j--) {
            if (vetor[j] > vetor[min]) {
                min = j;
            }
        }

        int temp;
		temp = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = temp;
    }
}
clock_t start_time;
clock_t end_time;

void Ordenacao_Selecao(int vetor[], int tam) {
	int i, j;
    for(i = 0; i < tam - 1; i++) {
        int min;
		min = i;

        for (j = i + 1; j < tam; j++) {
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }

        int temp;
		temp = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = temp;
    }
}
int main(){
	srand(time(NULL));
	int piorOrd[MAX];
	int i;
	for(i = 0; i < MAX; i++){
		piorOrd[i] = rand() % MAX;
	}
	//Para calcular o pior caso, basta remover o comentário da linha abaixo, que faz com que o vetor esteja em ordem decrescente
	//Decrescente(piorOrd, MAX);
	//Para calcular o melhor caso, basta remover o comentário da linha abaixo, que faz com que o vetor esteja em ordem crescente
	//Ordenacao_Selecao(piorOrd, MAX);
	clock_t start_time = clock();
	Ordenacao_Bolha(piorOrd, MAX);
	clock_t end_time = clock();
	double time_taken = (double)(end_time - start_time)/CLOCKS_PER_SEC;
	printf("Time: %f", time_taken);
	//ordenacao_selecao(MAX, piorOrd);	
}


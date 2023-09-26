#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 400000
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

clock_t start_time;
clock_t end_time;

int main(){
	srand(time(NULL));
	int piorOrd[MAX];
	int i;
	for(i = 0; i < MAX; i++){
		piorOrd[i] = rand() % MAX;
	}
	//Para calcular o melhor caso, basta remover o comentário da linha abaixo, que faz com que o vetor esteja ordenado
	//Ordenacao_Selecao(piorOrd, MAX);
	//Para calcular o pior caso, basta remover o comentário da linha abaixo, que faz com que o menor valor esteja na ultima posição do vetor
	//piorOrd[MAX] = piorOrd[0];
	clock_t start_time = clock();
	Ordenacao_Selecao(piorOrd, MAX);
	clock_t end_time = clock();
	double time_taken = (double)(end_time - start_time)/CLOCKS_PER_SEC;
	printf("Time: %f", time_taken);
	
	
	//ordenacao_selecao(MAX, piorOrd);
	
	
}



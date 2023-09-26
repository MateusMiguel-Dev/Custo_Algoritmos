#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define numero 33
unsigned long int fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

clock_t start_time;
clock_t end_time;
int main(){
	srand(time(NULL));
	clock_t start_time = clock();
	unsigned long long int resultado = fatorial(numero);
	clock_t end_time = clock();
    printf("O fatorial de %d e %llu\n", numero, resultado);
	double time_taken = (double)(end_time - start_time)/CLOCKS_PER_SEC;
	printf("\nTime: %f", time_taken);
}

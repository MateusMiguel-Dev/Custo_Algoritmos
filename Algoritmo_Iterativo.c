#include <stdio.h>
#include <stdlib.h>
#include <time.h>
unsigned long int exponenciacao(unsigned long int a, unsigned long int n){
	unsigned long int an;
	if(n == 0)
		return 1;
	else{
		unsigned long int aux = exponenciacao(a, n/2);
		an = aux * aux;
		if(n % 2 == 1)
			an = an * a;
	}
	return an;
}
clock_t start_time;
clock_t end_time;
int main(){
	int i;
	srand(time(NULL));
	clock_t start_time = clock();
	printf("\n%d", start_time);
	//for(i = 0; i < 2000000000; i++){
	//	int count =+ i;
	//}
	unsigned long int resultado = exponenciacao(19, 62);
	clock_t end_time = clock();
	printf("\n%d", end_time);
	printf("%lu", resultado);
	unsigned long int time_taken = (unsigned long int)(end_time - start_time)/CLOCKS_PER_SEC;
	printf("\nTime: %llu", time_taken);
}

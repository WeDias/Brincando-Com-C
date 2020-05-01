#include <stdio.h>

int main(void){
	int numero, contador;
	scanf("%i", &numero);
	for(contador = 1; contador <= 10; contador++){
		printf("%i x %i = %i\n", contador, numero, numero * contador);
	}
	return 0;
}

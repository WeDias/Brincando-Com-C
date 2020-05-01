#include <stdio.h>

int main(void){
	int numero, contador;
	scanf("%i", &numero);
	for(contador = 1; contador <= 10000; contador++){
		if(contador % numero == 2) printf("%d\n", contador);;
	}
	return 0;
}

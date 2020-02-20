# include <stdio.h>
int main(){
	long int notas[] = {100, 50, 20, 10, 5, 2, 1}, sacar, contador = 0;
	scanf("%i", &sacar);
	printf("%i\n", sacar);
	for(contador; contador < 7; contador++){
		int divisor = notas[contador];
		notas[contador] = sacar / divisor;
		sacar = sacar % divisor;
		printf("%i nota(s) de R$ %i,00\n", notas[contador], divisor);
	}
	return 0;
}
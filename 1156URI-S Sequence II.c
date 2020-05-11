#include <stdio.h>

int main(){
	float soma = 1.0, dividendo = 3.0, divisor = 2.0;
	int cont;
	for(cont = 0; cont < 18; cont++){
		soma += dividendo / divisor;
		dividendo += 2, divisor *= 2;
	}
	printf("%.2f\n", soma);
	return 0;
}

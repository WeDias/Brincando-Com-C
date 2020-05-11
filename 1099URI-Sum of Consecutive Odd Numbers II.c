#include <stdio.h>

int main(){
	long maior, menor, num, x, y, vezes, cont, soma = 0;
	scanf("%li", &vezes);
	for(cont = 0; cont < vezes; cont++){
		scanf("%li %li", &x, &y);
		if(x > y) maior = x, menor = y;
		else maior = y, menor = x;
		for(menor++; menor < maior; menor++){
			if(menor % 2 != 0) soma += menor;
		}
		printf("%li\n", soma);
		soma = 0;
	}
	return 0;
}

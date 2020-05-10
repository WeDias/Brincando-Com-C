#include <stdio.h>

int main(){
	long x, y, maior, menor, soma = 0;
	scanf("%li %li", &x, &y);
	if(x > y) maior = x, menor = y;
	else maior = y, menor = x;
	for(menor; menor <= maior; menor++){
		if(menor % 13 != 0) soma += menor;
	}
	printf("%li\n", soma);
	return 0;
}

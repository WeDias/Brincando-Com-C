#include <stdio.h>

/* Ex 2: Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e
   versa. Escreva ao final o vetor obtido.
*/
int main(){
	int vetor[8], temp[4], cont;
	for(cont = 0; cont < 8; cont++) scanf("%d", &vetor[cont]);
	for(cont = 0; cont < 8; cont++){
		if(cont < 4){
			temp[cont] = vetor[cont];
			vetor[cont] = vetor[cont+4];
		}
		else vetor[cont] = temp[cont-4];
	}
	printf("\n");
	for(cont = 0; cont < 8; cont++) printf("%d\n", vetor[cont]);
	return 0;
}

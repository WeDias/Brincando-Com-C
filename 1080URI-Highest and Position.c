#include <stdio.h>

int main(){
	int contfim;
	scanf("%d", &contfim);
	char animal;
	int cont, coelhos = 0, ratos = 0, sapos = 0, total = 0, atual;
	for(cont = 0; cont < contfim; cont++){
		scanf("%d %c", &atual, &animal);
		total += atual;
		if(animal == 'C') coelhos += atual;
		else if(animal == 'R') ratos += atual;
		else if(animal == 'S') sapos += atual;
	}
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2f %%\n", (float) coelhos / total * 100);
	printf("Percentual de ratos: %.2f %%\n", (float) ratos / total * 100);
	printf("Percentual de sapos: %.2f %%\n", (float) sapos / total * 100);
	return 0;
}

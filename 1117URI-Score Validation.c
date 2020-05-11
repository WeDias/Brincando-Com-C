#include <stdio.h>

int main(){
	float nota, soma = 0.0;
	int cont = 0;
	while(1){
		if(cont == 2) break;
		scanf("%f", &nota);
		if(nota >= 0.0 && nota <= 10.0) cont++, soma += nota;
		else printf("nota invalida\n");
	}
	printf("media = %.2f\n", soma / 2);
	return 0;
}

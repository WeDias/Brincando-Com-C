#include <stdio.h>

int main(){
	float nota, novo = 1.0;
	while(1){
		if(novo == 1.0){
			int cont = 0;
			float soma = 0.0;
			while(1){
				if(cont == 2) break;
				scanf("%f", &nota);
				if(nota >= 0.0 && nota <= 10.0) cont++, soma += nota;
				else printf("nota invalida\n");
			}
			printf("media = %.2f\n", soma / 2.0);
		}
		else if (novo == 2.0) break;
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%f", &novo);
	}
	return 0;
}

#include <stdio.h>

int main(){
	int idade = 0, cont = 0, soma = 0;
	while(1){
		scanf("%d", &idade);
		if(idade < 0) break;
		else cont++, soma += idade;
	}
	printf("%.2f\n", (float)soma / cont);
	return 0;
}

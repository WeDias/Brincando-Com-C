#include <stdio.h>

// Ex 1: Dada uma sequencia de n numeros, imprimi-la na ordem inversa a da leitura
int main(){
	int x;
	printf("Quantos numeros deseja inserir ? ");
	scanf("%d", &x);
	int nums[x], cont;
	for(cont = 0; cont < x; cont++){
		scanf("%d", &nums[cont]);
	}
	printf("\n");
	for(x--; x >= 0; x--){
		printf("%d ", nums[x]);
	}
	return 0;
}

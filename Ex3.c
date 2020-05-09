#include <stdio.h>

/* Ex 3: Leia um vetor de 10 posições e em seguida um valor X qualquer. Seu programa
   devera fazer uma busca do valor de X no vetor lido e informar a posição em que foi
   encontrado ou se não foi encontrado.
*/
int main(){
	int num, cont, valores[10], conta = 0;
	for(cont = 0; cont < 5; cont++){
		scanf("%d", &valores[cont]);
	}
	printf("Digite um numero para procurar: ");
	scanf("%d", &num);
	for(cont = 0; cont < 5; cont++){
		if(num == valores[cont]) conta++;
	}
	if(conta) printf("Foram encontrados %d numeros %d\n", conta, num);
	else printf("Nao encontrei o valor %d\n", num);
	return 0;
}

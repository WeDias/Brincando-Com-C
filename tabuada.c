#include <stdio.h>

int main(void){
	int continuar;
	do{
	int numero;
	printf("----------TABUADA----------\n");
	printf("Digite um numero: ");
	scanf("%i", &numero);
	int contador = 0;
	for(contador; contador <= 10; contador++){
		printf("%i x %i = %i\n", numero, contador, numero * contador);
	}
	printf("---------------------------\n");
	printf("Deseja testar outro numero ?\n[0]Nao\n[1]Sim\n");
	scanf("%i", &continuar);
	}while(continuar);
	return 0;
}

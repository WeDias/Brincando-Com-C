#include<stdio.h>
int main (){
	int criado = 0, senha;
	do{
		scanf("%i", &senha);
		if(senha != 2002)printf("Senha Invalida\n");
		else criado = 1;
	}while(!criado);
	printf("Acesso Permitido\n");
	return 0;
}

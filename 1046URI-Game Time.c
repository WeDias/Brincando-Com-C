#include<stdio.h>
int main(){
	int inicio, fim, horas;
	scanf("%i%i", &inicio, &fim);
	if(fim <= inicio) fim += 24;
	for(inicio; inicio < fim; inicio++, horas++);
	printf("O JOGO DUROU %i HORA(S)\n", horas);
	return 0;
}

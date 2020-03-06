#include<stdio.h>
int main(){
	long unsigned int vezes, cont;
	scanf("%i", &vezes);
	for(cont = 0; cont < vezes - 1; cont++){
		printf("Ho ");
	}
	printf("Ho!\n");
	return 0;
}

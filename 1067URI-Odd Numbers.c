#include<stdio.h>
int main(){
	int cont, fim;
	scanf("%i", &fim);
	for(cont = 1; cont <= fim; cont++) if(cont % 2 != 0) printf("%i\n", cont);
	return 0;
}

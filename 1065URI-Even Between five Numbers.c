#include<stdio.h>
int main(){
	int entrada, par, cont;
	for(cont = 0; cont <= 4; cont++){
		scanf("%i", &entrada);
		if(entrada % 2 == 0) par++;
	}
	printf("%i valores pares\n", par);
	return 0;
}

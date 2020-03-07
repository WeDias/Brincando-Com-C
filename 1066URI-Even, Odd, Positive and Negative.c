#include<stdio.h>
int main(){
	int a, cont, pos = 0, neg = 0, par = 0, impar = 0;
	for(cont = 0; cont <= 4; cont++){
		scanf("%i", &a);
		if(a > 0) pos++;
		else if(a < 0) neg++;
		
		if(a % 2 == 0 || a % -2 == 0) par++;
		else impar++;
	}
	printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", par, impar, pos, neg);
	return 0;
}

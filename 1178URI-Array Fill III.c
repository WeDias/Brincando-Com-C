#include <stdio.h>

int main(){
	double matriz[100];
	scanf("%lf", &matriz[0]);
	int cont;
	for(cont = 0; cont < 99; cont++){
		matriz[cont + 1] = matriz[cont] / 2.0;
	}
	for(cont = 0; cont < 100; cont++){
		printf("N[%d] = %.4lf\n", cont, matriz[cont]);
	}
	return 0;
}

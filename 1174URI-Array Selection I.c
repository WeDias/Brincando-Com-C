#include <stdio.h>

int main(){
	double matriz[100];
	int cont;
	for(cont = 0; cont < 100; cont++){
		scanf("%lf", &matriz[cont]);
	}
	for(cont = 0; cont < 100; cont++){
		if(matriz[cont] <= 10.0) printf("A[%d] = %.1lf\n", cont, matriz[cont]);
	}
	return 0;
}

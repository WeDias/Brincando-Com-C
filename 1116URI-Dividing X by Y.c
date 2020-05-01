#include <stdio.h>

int main(){
	int testes, x, y, cont;
	scanf("%d", &testes);
	for(cont = 0; cont < testes; cont++){
		scanf("%d %d", &x, &y);
		if(x == 0) printf("0.0\n");
		else if(y == 0) printf("divisao impossivel\n") ;
		else printf("%.1f\n", (float)x / y);
	}
	return 0;
}

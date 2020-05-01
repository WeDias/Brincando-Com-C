#include <stdio.h>

int main(){
	int x, y, maior, menor;
	scanf("%d %d", &x, &y);
	maior = y;
	menor = x;
	if(x > y){
		maior = x;
		menor = y;
	}
	for(++menor; menor < maior; menor++){
		int valor = menor % 5;
		if((valor == 2) || (valor == 3)){
			printf("%d\n", menor);
		}
	}
	return 0;
}

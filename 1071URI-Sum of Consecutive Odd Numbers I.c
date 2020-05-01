#include <stdio.h>

int main(){
	int x, y, somaImpar = 0, maior, menor;
	scanf("%d %d", &x, &y);
	maior = x;
	menor = y;
	if(y > x){
		menor = x;
		maior = y;
	}
	for(menor++; menor < maior; menor++){
		if(menor % 2 != 0) somaImpar += menor;
	}
	printf("%d\n", somaImpar);
	return 0;
}

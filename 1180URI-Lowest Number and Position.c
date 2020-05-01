#include <stdio.h>

int main(){
	int n, cont, menor, pmenor;
	scanf("%d", &n);
	int nuns[n];
	for(cont = 0; cont < n; cont++){
		scanf("%d", &nuns[cont]); 
		nuns[cont] = nuns[cont];
		if(nuns[cont] < menor) menor = nuns[cont], pmenor = cont;
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, pmenor);
	return 0;
}

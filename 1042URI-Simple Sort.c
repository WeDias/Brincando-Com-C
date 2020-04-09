#include<stdio.h>
int main(){
	// recebe valores
	int valores[3], backup[3], cont;
	for(cont = 0; cont < 3; cont++){
		scanf("%d", &valores[cont]);
		backup[cont] = valores[cont];
	}
	
	// separa valores
	cont = 0;
	while(cont < 2){
		int anterior = valores[cont], proximo = valores[cont+1];
		if(anterior > proximo){
			valores[cont] = proximo;
			valores[cont+1] = anterior;
			cont = 0;
		}
		else cont++;
	}
	
	//imprime valores
	for(cont = 0; cont < 3; cont++){
		printf("%d\n", valores[cont]);
	}
	printf("\n");
	for(cont = 0; cont < 3; cont++){
		printf("%d\n", backup[cont]);
	}
	return 0;
}

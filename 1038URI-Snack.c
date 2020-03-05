#include<stdio.h>
int main(){
	float cardapio[5][2] = {{1.0, 4.0}, {2.0, 4.5}, {3.0, 5.0}, {4.0, 2.0}, {5.0, 1.5}};
	int cont, code, quantidade;
	scanf("%i%i", &code, &quantidade);
	for(cont = 0; cont <= 4; cont++){
		if(code == cardapio[cont][0]){
			printf("Total: R$ %.2f\n", cardapio[cont][1] * quantidade);
			return 0;
		} 
	}
}

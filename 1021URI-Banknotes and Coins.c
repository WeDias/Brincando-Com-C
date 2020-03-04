#include<stdio.h>
int main(){
	int notas[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1}, c;
	float entrada;
	scanf("%f", &entrada);
	entrada *= 100;
	printf("NOTAS:\n");
	for(c = 0; c <= 11; c++){
		if(c <= 5){
			printf("%i nota(s) de R$ %i.00\n", (int)(entrada / notas[c]), notas[c] / 100);
		}
		else{
			if(c == 6){
				printf("MOEDAS:\n");
			}
			printf("%i moeda(s) de R$ %.2f\n", (int)(entrada / notas[c]), notas[c] / 100.0);
		}
		entrada -= (int)(entrada / notas[c]) * notas[c];
	}
	return 0;
}

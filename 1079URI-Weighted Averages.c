#include <stdio.h>

int main(){
	int vezes, cont;
	float a, b, c;
	scanf("%d", &vezes);
	for(cont = 0; cont < vezes; cont++){
		scanf("%f %f %f", &a, &b, &c);
		printf("%.1f\n", (a*2.0 + b*3.0 + c*5.0)/10.0);
	}
	return 0;
}

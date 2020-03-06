#include<stdio.h>
int main(){
	double entrada;
	scanf("%lf", &entrada);
	printf("VOLUME = %.3lf\n", 4.0 / 3.0 * 3.14159 * entrada * entrada * entrada);
	return 0;
}

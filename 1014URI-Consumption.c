#include<stdio.h>
int main(){
	int km;
	float combustivel;
	scanf("%i%f", &km, &combustivel);
	printf("%.3f km/l\n", km / combustivel);
	return 0;
}

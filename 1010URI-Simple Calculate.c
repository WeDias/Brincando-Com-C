#include<stdio.h>
int main(){
	int p1, u1, p2, u2;
	float v1, v2;
	scanf("%i%i%f", &p1, &u1, &v1);
	scanf("%i%i%f", &p2, &u2, &v2);
	printf("VALOR A PAGAR: R$ %.2f\n", u1 * v1 + u2 * v2);
	return 0;
}

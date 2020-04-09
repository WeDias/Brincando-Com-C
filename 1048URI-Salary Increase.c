#include<stdio.h>
int main(){
	float salario, ns, rjt;
	int per;
	scanf("%f", &salario);
	if(salario >= 0.00 && salario <= 400.00)per = 15;
	else if(salario >= 400.01 && salario <= 800.00)per = 12;
	else if(salario >= 800.01 && salario <= 1200.00)per = 10;
	else if(salario >= 1200.01 && salario <= 2000.00)per = 7;
	else if(salario > 2000) per = 4;
	rjt = salario/100*per, ns = salario + rjt;
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", ns, rjt, per);
	return 0;
}

#include<stdio.h>
int main(){
	char nome[30];
	double salario, vendas;
	scanf("%s%lf%lf", &nome, &salario, &vendas);
	printf("TOTAL = R$ %.2f\n", salario + (vendas / 100 * 15));
	return 0;
}

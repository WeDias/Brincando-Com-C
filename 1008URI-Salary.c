# include <stdio.h>
int main(){
	int numero, horas;
	float salario;
	scanf("%i %i %f", &numero, &horas, &salario);
	printf("NUMBER = %i\nSALARY = U$ %.2f\n", numero, horas * salario);
	return 0;
}
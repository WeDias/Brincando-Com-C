# include <stdio.h>
int main(){
	int dias[3] = {365, 30, 1}, idade, contador = 0;
	scanf("%i", &idade);
	for(contador; contador < 3; contador++){
		int divisor = dias[contador];
		dias[contador] = idade / divisor;
		idade = idade % divisor;
	}
	printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", dias[0], dias[1], dias[2]);
	return 0;
}
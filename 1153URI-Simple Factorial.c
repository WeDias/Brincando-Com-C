#include <stdio.h>

unsigned long fatorial(unsigned long num){
	if(num == 0) return 1;
	return num * fatorial(num-1);
}

int main(){
	unsigned long entrada;
	scanf("%lu", &entrada);
	printf("%lu\n", fatorial(entrada));
	return 0;
}

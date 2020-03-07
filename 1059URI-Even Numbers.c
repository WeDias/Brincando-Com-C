#include<stdio.h>
int main(){
	int cont;
	for(cont = 1; cont <= 100; cont++) if(cont % 2 == 0) printf("%i\n", cont);
	return 0;
}

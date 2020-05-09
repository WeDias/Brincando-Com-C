#include <stdio.h>

int main(){
	long x, cont;
	scanf("%li", &x);
	for(cont = 1; cont <= x; cont++){
		printf("%li %li %li\n", cont, cont*cont, cont*cont*cont);
	}
	return 0;
}

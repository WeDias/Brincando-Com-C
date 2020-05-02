#include <stdio.h>

int main(){
	long num, cont;
	scanf("%li", &num);
	for(cont = 1; cont <= num; cont++){
		if(cont % 2 == 0) printf("%li^2 = %li\n", cont, cont * cont);
	}
	return 0;
}3

#include <stdio.h>

int main(){
	int i = 1, j = 7, cont = 0;
	while(1){
		printf("I=%d J=%d\n", i, j);
		j--;
		cont++;
		if(cont == 3){
			if(i == 9){
				break;
			}
			j += 5;
			i += 2;
			cont = 0;
		}
	}
	return 0;
}

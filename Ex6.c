#include <stdio.h>

/* Ex 6: Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
   elementos. Escreva ao final a matriz obtida
*/
int main(){
	int matriz[5][5] = {1,0,0,0,0,
			    0,1,0,0,0,
			    0,0,1,0,0,
			    0,0,0,1,0,
			    0,0,0,0,1};
	
	int conty, contx;
	for(conty = 0; conty < 5; conty++){
		for(contx = 0; contx < 5; contx++){
			printf("%d", matriz[conty][contx]);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main(){
	long valor;
	int num, cont, conti = 0, conto = 0;
	scanf("%li", &num);
	for(cont = 0; cont < num; cont++){
		scanf("%li", &valor);
		if(valor >= 10 && valor <= 20) conti++;
		else conto++;
	}
	printf("%d in\n%d out\n", conti, conto);
	return 0;
}

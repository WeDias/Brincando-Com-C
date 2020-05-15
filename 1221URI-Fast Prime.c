#include <stdio.h>
#include <math.h>

int main(){
	int testes, contt;
	long long int num, cont;
	scanf("%d", &testes);
	for(contt = 0; contt < testes; contt++){
		int primo = 1;
		scanf("%lli", &num);
		for(cont = 2; cont <= sqrt(num); cont++){
			if((num % cont == 0) && (cont != num)){
				printf("Not Prime\n");
				primo = 0;
				break;
			}
		}
		if(primo) printf("Prime\n");
	}
	return 0;
}

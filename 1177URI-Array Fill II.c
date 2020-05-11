#include <stdio.h>

int main(){
	int t, nums[1000], cont, conta = 0;
	scanf("%d", &t);
	while(conta < 1000){
		for(cont = 0; cont < t; cont++){
			if(conta == 1000) break;
			nums[conta] = cont;
			printf("N[%d] = %d\n", conta, cont), conta++;
			
		} 
	}
	return 0;
}

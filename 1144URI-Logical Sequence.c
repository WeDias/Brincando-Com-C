#include <stdio.h>

int main(){
	long long int cont, num;
	scanf("%lli", &num);
	for(cont = 1; cont <= num; cont++){
		printf("%lli %lli %lli\n", cont, cont*cont, cont*cont*cont);
		printf("%lli %lli %lli\n", cont, cont*cont +1, cont*cont*cont +1);
	}
	return 0;
}

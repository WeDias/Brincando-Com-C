#include <stdio.h>

int main(){
	int n1, cont;
	scanf("%i", &n1);
	long long int anterior = 0, posterior = 1, aux;
	for(cont = 1; cont <= n1; cont++){
		if(cont == n1) printf("%lli\n", anterior);
		else printf("%lli ", anterior);
		aux = anterior;
		anterior = posterior;
		posterior = aux + posterior;
	}
	return 0;
}

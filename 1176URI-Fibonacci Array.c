#include<stdio.h>
int main(){
	int n1, n2, cont, contf;
	scanf("%i", &n1);
	for(cont = 0; cont < n1; cont++){
		scanf("%i", &n2);
		if(n2 == 0)printf("Fib(0) = 0\n");
		else{
			long long int anterior = 0, posterior = 1, aux;
			for(contf = 0; contf < n2; contf++){
				aux = anterior;
				anterior = posterior;
				posterior = aux + posterior;
			}
			printf("Fib(%i) = %lli\n", n2, anterior);
		}		
	}
	return 0;
}

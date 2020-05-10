#include <stdio.h>

int main(){
	int cont;
	float S = 0;
	for(cont = 1; cont <= 100; cont++){
		S += 1.0 / cont;
	}
	printf("%.2f\n", S);
	return 0;
}

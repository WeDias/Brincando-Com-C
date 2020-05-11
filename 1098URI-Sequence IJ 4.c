#include <stdio.h>

int main(){
	float i = 0.0 , j = 1.0, aux = 0;
	int cont;
	while(i <= 2.2){
		j += aux;
		for(cont = 0; cont < 3; cont++){
			if(i == 0.0 || i == 1.0 || i > 1.9) printf("I=%.0f J=%.0f\n", i, j);
			else printf("I=%.1f J=%.1f\n", i, j);
			j++;
		}
		aux += 0.2;
		j = 1, i += 0.2;
	}
	return 0;
}

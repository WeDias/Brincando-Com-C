#include <stdio.h>

int main(){
	long x, cont;
	while(1){
		scanf("%li", &x);
		if(x == 0) break;
		for(cont = 1; cont <= x; cont++){
			if(cont < x) printf("%li ", cont);
			else printf("%li\n", cont);
		}
	}
	return 0;
}

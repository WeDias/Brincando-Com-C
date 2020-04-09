#include<stdio.h>
int main(){
	int cont, x;
	unsigned long int y;
	scanf("%d %ld", &x, &y);
	for(cont = 1; cont <= y; cont++){
		if(cont % x == 0) printf("%d\n", cont);
		else printf("%d ", cont);
	}
	if(y % x != 0) printf("\n");
	return 0;
}

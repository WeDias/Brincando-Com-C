#include<stdio.h>
int main (){
	long n2;
	int n1, cont;
	scanf("%i", &n1);
	for(cont = 0; cont < n1; cont++){
		scanf("%li", &n2);
		if(n2 == 0) printf("NULL\n");
		else if(n2 % 2 == 0 && n2 < 0) printf("EVEN NEGATIVE\n");
		else if(n2 % 2 == 0 && n2 > 0) printf("EVEN POSITIVE\n");
		else if(n2 % 2 != 0 && n2 < 0) printf("ODD NEGATIVE\n");
		else if(n2 % 2 != 0 && n2 > 0) printf("ODD POSITIVE\n");
	}
	return 0;
}

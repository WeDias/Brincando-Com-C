#include<stdio.h>
int main(){
	float num;
	int cont, contmais = 0;
	for(cont = 0; cont <= 5; cont++){
		scanf("%f", &num);
		if(num > 0) contmais++;
	}
	printf("%i valores positivos\n", contmais);
	return 0;
}

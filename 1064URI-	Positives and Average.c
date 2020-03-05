#include<stdio.h>
int main(){
	float num, media;
	int cont, contmais;
	for(cont = 0; cont <= 5; cont++){
		scanf("%f", &num);
		if(num > 0){
			contmais++;
			media += num;
		}
	}
	media /= contmais;
	printf("%i valores positivos\n", contmais);
	printf("%.1f\n", media);
	return 0;
}

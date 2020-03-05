#include<stdio.h>
int main(){
	int horas, kmh;
	scanf("%i%i", &horas, &kmh);
	printf("%.3f\n", kmh * horas / 12.0 );
	return 0;
}

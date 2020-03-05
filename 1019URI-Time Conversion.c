#include<stdio.h>
int main(){
	int num, hora, minuto, segundo;
	scanf("%i", &num);
	printf("%i:%i:%i\n", num / 3600, num % 3600 / 60, num % 3600 % 60);
	return 0;
}

# include <stdio.h>
# include <stdlib.h>
int main(){
	int a, b, c, maiorab;
	scanf("%i %i %i", &a, &b, &c);
	maiorab = (a + b + abs(a-b)) / 2;
	printf("%i eh o maior\n", (maiorab + c + abs(maiorab-c)) / 2);
	return 0;
}
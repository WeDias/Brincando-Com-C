#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	if(num % 2 != 0){
		printf("%d\n%d\n%d\n%d\n%d\n%d\n", num, num+2, num+4, num+6, num+8, num+10);
	}
	else{
		printf("%d\n%d\n%d\n%d\n%d\n%d\n", num+1, num+3, num+5, num+7, num+9, num+11);
	}
	return 0;
}

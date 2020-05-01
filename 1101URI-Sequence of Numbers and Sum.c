#include <stdio.h>

int main(){
	int num1, num2;
	while(scanf("%d %d", &num1, &num2), num1 > 0 && num2 > 0){
		int soma = 0;
		if(num1 > num2){
			for(num2; num2 <= num1; num2++){
				soma += num2;
				printf("%d ", num2);
			}
		}
		else{
			for(num1; num1 <= num2; num1++){
				soma += num1;
				printf("%d ", num1);
			}
		}
		printf("Sum=%d\n", soma);
	}
	return 0;
}

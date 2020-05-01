#include <stdio.h>

int main(){
	int num, contA, contB, sum = 0;
	scanf("%d", &num);
	for(contA = 0; contA < num; contA++){
		for(contB = 0; contB < 3; contB++){
			sum++;
			printf("%d ", sum);
		}
		sum++;
		printf("PUM\n");
	}
	return 0;
}

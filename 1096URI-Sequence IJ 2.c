#include <stdio.h>

int main(){
	int i = 1, j = 7;
	while(1){
		printf("I=%d J=%d\n", i, j);
		j--;
		if(j == 4){
			if(i == 9){
				break;
			} 
			j = 7;
			i += 2;
		} 
	}
	return 0;
}

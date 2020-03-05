#include<stdio.h>
int main(){
	float n1, n2, n3, n4, ex, media;
	scanf("%f%f%f%f", &n1 ,&n2 ,&n3 ,&n4);
	media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
	printf("Media: %.1f\n", media);
	if(media >=  7) printf("Aluno aprovado.\n");
	else if(media < 5) printf("Aluno reprovado.\n");
	else{
		printf("Aluno em exame.\n");
		scanf("%f", &ex);
		printf("Nota do exame: %.1f\n", ex);
		if(media >=  5) printf("Aluno aprovado.\n");
		else if(media < 5) printf("Aluno reprovado.\n");
		media = (media + ex) / 2;
		printf("Media final: %.1f\n", media);
	}
	return 0;
}

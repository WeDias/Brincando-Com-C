#include <stdio.h>

int main(){
	int testes;
	scanf("%d", &testes);
	int cont;
	long pa, pb;
	float ca, cb;
	for(cont = 0; cont < testes; cont++){
		scanf("%d %d %f %f", &pa, &pb, &ca, &cb);
		int anos = 0;
		while(1){
			if(pa > pb){
				if(anos > 100) printf("Mais de 1 seculo.\n");
				else printf("%d anos.\n", anos);
				break;
			}
			pa += (int)(pa * ca / 100);
			pb += (int)(pb * cb / 100);
			anos++;
		}
	}
	return 0;
}

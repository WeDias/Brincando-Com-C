#include <stdio.h>

int main(){
	int ih, im, fh, fm, inicio, fim;
	scanf("%d %d %d %d", &ih, &im, &fh, &fm);
	int tempo = (fh * 3600 + fm * 60) - (ih * 3600 + im * 60);
	int hora = tempo / 3600;
	int minuto = tempo % 3600 / 60;
	if(minuto < 0) minuto += 60, hora--;
	if(hora < 0) hora += 24;
	if (hora == 0 && minuto == 0) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n", hora, minuto);
	else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
	return 0;
}

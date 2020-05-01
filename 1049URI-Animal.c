#include <stdio.h>
#include <string.h>

int main(){
	char string[30];
	scanf("%s", string);
	if(strcmp(string, "vertebrado") == 0){
		scanf("%s", string);
		if(strcmp(string, "ave") == 0){
			scanf("%s", string);
			if(strcmp(string, "carnivoro") == 0){
				printf("aguia\n");
			}
			else{
				printf("pomba\n");
			}
		}
		else{
			scanf("%s", string);
			if(strcmp(string, "onivoro") == 0){
				printf("homem\n");
			}
			else{
				printf("vaca\n");
			}
		}
	}
	else{
		scanf("%s", string);
		if(strcmp(string, "inseto") == 0){
			scanf("%s", string);
			if(strcmp(string, "hematofago") == 0){
				printf("pulga\n");
			}
			else{
				printf("lagarta\n");
			}
		}
		else{
			scanf("%s", string);
			if(strcmp(string, "hematofago") == 0){
				printf("sanguessuga\n");
			}
			else{
				printf("minhoca\n");
			}
		}
	}
	return 0;
}

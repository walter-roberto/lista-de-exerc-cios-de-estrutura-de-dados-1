#include <stdio.h>
int main(){
	float V[5],V2[5];
	
	printf("digite os valores para preencher o primeiro vetor\n");
	
	for(int i=0;i<5;i++){
		scanf("%f",&V[i]);
	}
	
	printf("digite valores para preencher o segundo vetor\n");
	
	for(int i=0;i<5;i++){
		scanf("%f",&V2[i]);
	}
	
	printf("os valores do primeiro vetor:\n");
	for(int i=0;i<5;i++){
		printf("[%.2f]",V[i]);
	}
	printf("\n");
	printf("\n");
	
	printf("os valores do segundo vetor:\n");
	for(int i=0;i<5;i++){
		printf("[%.2f]",V2[i]);
	}
	printf("\n");
	printf("\n");
	
	printf("valores do produto escalar\n");
	for(int i=0;i<5;i++){
		printf("[%.2f]",V[i]*V2[i]);
	}
	
	
	return 0;
}
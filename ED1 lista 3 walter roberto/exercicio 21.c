#include <stdio.h>
int main(){
	int V[10],V2[10],V3[10];
	
	printf("digite os valores para preencher o primeiro vetor\n");
	
	for(int i=0;i<10;i++){
		scanf("%d",&V[i]);
	}
	
	printf("digite valores para preencher o segundo vetor\n");
	
	for(int i=0;i<10;i++){
		scanf("%d",&V2[i]);
	}
	
	for(int i=0;i<10;i++){
		V3[i]=V[i-V2[i]];
		printf("[%d] ",V3[i]);
	}
	
	return 0;
}
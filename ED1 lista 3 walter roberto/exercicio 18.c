#include <stdio.h>
int main(){
	int V[10],X;
	
	printf("digite os valores para preencher o vetor\n");
	
	for(int i=0;i<10;i++){
		scanf("%d",&V[i]);
	}
	
	printf("digite um valor para buscar os multiples dele no vetor\n");
	scanf("%d",&X);
	
	for(int i=0;i<10;i++){
		if(V[i]%X==0){
			printf("[%d] ",V[i]);
		}
	}
	
	return 0;
}
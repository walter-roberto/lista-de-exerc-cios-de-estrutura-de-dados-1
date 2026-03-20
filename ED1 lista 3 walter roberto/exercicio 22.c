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
		if(i%2==0){
			V3[i]=V[i];
		}else{
			V3[i]=V2[i];
		}
	}
	
	return 0;
}
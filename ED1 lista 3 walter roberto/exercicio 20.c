#include <stdio.h>
int main(){
	int V[10],V2[10],;
	
	printf("digite valores entre 0 e 50 para preencher o vetor\n");
	
	for(int i=0;i<10;i++){
		scanf("%d",&V[i]);
		if(V[i]<0||V[i]>50){
			printf("valor invalido digite um valor entre 0 e 50\n");
			i--;
		}
	}
	
	for(int i=0;i<10;i++){
		if(V[i]%2!=0){
			V2[i]=V[i];
		}
	}
	
	printf("os valores do primeiro vetor:\n");
	
	for(int i=0;i<10;i+=2){
	printf("[%d] [%d]\n",V[i],V[i+1]);
	}
	
	printf("valores do segundo vetor\n");
	for(int i=0;i<10;i+=2){
		printf("[%d] [%d]\n",V2[i],V2[i+1]);
	}
	
	return 0;
}
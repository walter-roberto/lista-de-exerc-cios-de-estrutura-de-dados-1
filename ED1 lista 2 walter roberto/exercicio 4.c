#include<stdio.h>
int main(){
	
	int matriz[3][3],maior=0,menor=0;
	printf("digite os valores para preencher a matriz 3 por 3\n");
    printf("posicao [0][0]\n");
	scanf("%d",&matriz[0][0]);
	maior=matriz[0][0];
	menor=matriz[0][0];
	
	for(int i=0;i<3;i++){
		for(int k=1;k<4;k++){
			
			printf("posicao [%d][%d]\n",i,k);
			scanf("%d",&matriz[i][k]);
			
			if(matriz[i][k]>maior){
				maior=matriz[0][0];
			}
			if(matriz[i][k]<menor){
			menor=matriz[0][0];	
			}
		}
	}
		printf("os valores da matriz sao os seguintes\n");
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
		printf("%d ",matriz[i][k]);
		}
	printf("\n");
	}
	printf("o maior elemento e %d", maior);
	printf("o menor elemento e %d",menor);
return 0;
}
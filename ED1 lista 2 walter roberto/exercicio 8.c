#include<stdio.h>
int main(){
	
 int matriz[4][4], triangulo[6],V=0;

 printf("digite os valores para preencher a matriz 4 por 4\n");
	
	for(int i=0;i<4;i++){
		for(int k=0;k<4;k++){
			
			printf("posicao [%d][%d]\n",i,k);
			scanf("%d",&matriz[i][k]);
			
			if(i>k){
				triangulo[V]=matriz[i][k];
				V++;
			}
								
			}
		}
	printf("os valores da matriz sao os seguintes\n");
	
	for(int i=0;i<4;i++){
		for(int k=0;k<4;k++){
		
		printf("%d ",matriz[i][k]);
		}
	printf("\n");
	}

 printf("os valores do triangulo inferior e");

 for(int i=0;i<6;i++){
	printf("[%d] ",triangulo[i]);
}

 return 0;
}
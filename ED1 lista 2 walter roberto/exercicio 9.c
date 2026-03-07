#include<stdio.h>
int main(){
	
 int matriz[3][3], vetor1[6],vetor2[6],V1=0,V2=0;

 printf("digite os valores para preencher a matriz 4 por 4\n");
	
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			
			printf("posicao [%d][%d]\n",i,k);
			scanf("%d",&matriz[i][k]);
			
			if(i!=k){
				vetor1[V1]=matriz[i][k];
				V1++;
			}
			if(i+k!=2){
				vetor2[V2]=matriz[i][k];
				V2++;
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

 printf("os valores que não estão na diagonal principal sao");

 for(int i=0;i<6;i++){
	printf("[%d] ",vetor1[i]);
}
 printf("os valores que não estão na diagonal secundaria sao");

 for(int i=0;i<6;i++){
	printf("[%d] ",vetor2[i]);
}

 return 0;
}
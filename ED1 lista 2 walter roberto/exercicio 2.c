#include<stdio.h>
int main(){
	
	int matriz[4][4],soma0=0,soma1=0,soma2=0, soma3=0;
	printf("digite os valores para preencher a matriz 4 por 4\n");
	
	for(int i=0;i<3;i++){
		for(int k=0;k<4;k++){
			
			printf("posicao [%d][%d]\n",i,k);
			scanf("%d",&matriz[i][k]);
			
			switch(i){
				case 0:
					soma0+=matriz[i][k];
					break;	
			    case 1:
					soma1+=matriz[i][k];
					break;
				case 2:
					soma2+=matriz[i][k];
					break;
				case 3:
					soma3+=matriz[i][k];
					break;
								
			}
		}
	}
	printf("os valores da matriz sao os seguintes\n");
	for(int i=0;i<3;i++){
		for(int k=0;k<4;k++){
		printf("%d ",matriz[i][k]);
		}
	printf("\n");
	}
printf("a soma da primeira linha e %d\n",soma0);
printf("a soma da segunda linha e %d\n",soma1);
printf("a soma da terceira linha e %d\n",soma2);
printf("a soma da quarta linha e %d\n",soma3);
return 0;
}
#include<stdio.h>
int main(){
	
	float matriz[3][4],soma0=0,soma1=0,soma2=0;
	printf("digite os valores para preencher a matriz 3 por 4\n");
	
	for(int i=0;i<3;i++){
		for(int k=0;k<4;k++){
			
			printf("posicao [%d][%d]\n",i,k);
			scanf("%f",&matriz[i][k]);
			
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
								
			}
		}
	}
	printf("os valores da matriz sao os seguintes\n");
	for(int i=0;i<3;i++){
		for(int k=0;k<4;k++){
		printf("%.2f ",matriz[i][k]);
		}
	printf("\n");
	}
printf("a soma da primeira linha e %.2f\n",soma0);
printf("a soma da segunda linha e %.2f\n",soma1);
printf("a soma da terceira linha e %.2f\n",soma2);
return 0;
}
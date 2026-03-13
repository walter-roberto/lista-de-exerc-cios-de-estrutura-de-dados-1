#include <stdio.h>
int main(){
	int A[7],X,Y,soma; 
	int i=0;
	for(i=0;i<8;i++){
		scanf("%f",&A[i]);
	}
	    printf("digite dois valores entre 0 e 7 para definir as posicoes do vetor");
	    scanf("%d",&X);
	    scanf("%d",&Y);
	while(X==Y){
		printf("valores iguais favor fornecer valores diferentes entre 0 e 7");
		scanf("%d",&X);
	    scanf("%d",&Y);
	}
	while(X<0 || X>7){
	
	    printf("valor fora do limite favor digitar um valor entre 0 e 7");
	    scanf("%d",&X);
	}
	while(Y<0 || Y>7){
		printf("valor fora do limite favor digitar um valor entre 0 e 7");
	    scanf("%d",&Y);
	}
	soma+=A[X]+A[Y];
	printf("o resultado da soma das duas cordenadas e %d",soma);
	return 0; 
}

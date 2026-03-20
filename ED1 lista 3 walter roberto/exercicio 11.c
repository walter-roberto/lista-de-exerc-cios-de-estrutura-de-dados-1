#include<stdio.h>
int main(){
	float V[10],soma;
	int negativos=0;
	
		printf("digite um valor para preencher o vetor");
	
	for(int i=0;i<9;i++){
		scanf("%f",&V[i]);
		
		if(V[i]>=0){
			soma+=V[i];
		}
		else{
			negativos++;
		}
	}
	printf("a quantia de numeros negativos e %d\n",negativos);
	printf("a soma dos positivos e %.2f\n",soma);
	
	return 0;
}
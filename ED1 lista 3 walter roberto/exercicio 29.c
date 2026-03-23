#include <stdio.h>

int main(){

int V[10],somap=0,impar=0;
	
printf("digite os valroes para preencher o vetor\n");
	
	for(int i=0;i<6;i++){
	
	scanf("%d",&V[i]);	
}
	for(int i=0;i<6;i++){
		if(V[i]%2==0){
			printf("o valor de %d e par",V[i]);
			somap+=V[i];
		}
		else{
		   printf("o valor %d e impar",V[i]);
		   impar++;
		   }
	}
		printf("a soma dos numeors pares e %d\n",somap);
		printf("a quantia de numeros impares e %d\n",impar);
	
return 0;
}
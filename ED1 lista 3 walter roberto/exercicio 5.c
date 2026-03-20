#include <stdio.h>
int main(){
int vetor[10],pares=0;

printf("digite os valores para preencher o vetor\n");

for(int i=0; i<10; i++){
	scanf("%d",&vetor[i]);
	
	if(vetor[i]%2==0){
		pares++;
	}
}
printf("a quantia de numeros pares e %d",pares); 
	return 0;
}
#include <stdio.h>
int main(){
	int V[10],maior=0,P=0;
	
	printf("digite o valor para preencher o vetor no local [1]\n");
	scanf("%d",&V[0]);
	maior=V[0];
	P++;
	
	for(int i=1;i<10;i++){
		printf("digite o valor para preencher o vetor no local [%d]\n",i+1);
		scanf("%d",&V[i]);
		
		if(V[i]>maior){
			maior=V[i];
			P=i;
			
		}

	}
	
	for(int i=0;i<10;i++){
		printf("[%d]",V[i]);
	}
	
	printf("o maior elemento e %d\n",maior);
	printf("esta na posicao [%d]",P+1);
	
	
	return 0;
}
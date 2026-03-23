#include <stdio.h>

int main(){
	
	int V[10],x=0,teste=0;
	
	printf("digite os valores para preencher o vetor\n");
	scanf("%d",V[0]);
	
	for(int i=1;i<10;i++){
		scanf("%d",x);
		teste=0;
		
		for(int k=0;k<i;){
			if(V[k]==x){
				
				printf("digite outro valor pois este ja esta no vetor");
				teste=1;
				i--;
			}
			
			if(teste!=0){
				V[i]=x;
				k++;
			}
			
		
			
		}
	}

return 0;

}
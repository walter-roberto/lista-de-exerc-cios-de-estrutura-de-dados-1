#include <stdio.h>


int main(){
	int X[15],Y;
	
	printf("digite os valores para preencher o vetor\n");
	
	scanf("%d",X[0]);
	
	for(int i=1;i<15;i++){
		
		scanf("%d",Y);
		
		for(int k=0;k<i;){
			if(X[i]==Y){
				
				printf("digite um valor diferente\n");
				scanf("%d",Y);
			}
			else{
				X[i]=Y;
				k++;
			}
		}
	}
	
	for(int i=0;i<15;i++){
		printf("%d [%d]\n",i,X[i]);
	}
	
	
	
	return 0;
}
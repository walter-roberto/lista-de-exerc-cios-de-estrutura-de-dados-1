#include <stdio.h>
int main(){
	
	int V[10],x=0;
	
	printf("digite valores em ordem crescente para preencher o vetor\n");
	scanf("%d",&V[0]);
	
	for(int i=1;i<10;i++){
		scanf("%d",&x);
		
		if(V[i-1]>x){
			printf("valor digitado menor que o anterior favor digitar outro valor maior que %d",V[i-1]);
			i--;
		}
		else{
			V[i]=x;
		}
		
	}
	
	
	for(int i=0;i<10;i++){
		printf("[%d] ",V[i]);
	}

return 0;
}
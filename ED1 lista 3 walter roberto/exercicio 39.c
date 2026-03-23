#include <stdio.h>
int main(){
	
	int n,x=1;
	
	printf("digite o numero de linhas para o triangulo de pascal\n");
	scanf("%d",&n);
	
	
	
	for(int i=0;i<n;i++){
		
		for(int k=0;k<=i;k++){
			if(k==0||i==0){
				x=1;
			}
			else{
				x=x*(i-k+1)/k;
				
				
			}
			printf("%d ",x);
		}
		
		printf("\n");
	}
	
return 0;
}
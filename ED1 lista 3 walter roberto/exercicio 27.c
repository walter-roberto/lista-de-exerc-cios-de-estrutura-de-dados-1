#include <stdio.h>
int main(){
	int V[10],P;

printf("digite valores para preencher o vetor\n");
for(int i=0;i<10;i++){
	scanf("%d",&V[i]);
}	

for(int i=0;i<10;i++){
	
	P=1;
	if(V[i]<2){
		P=0;
	}
	
	for(int k=2; k<=V[i]/2; k++){
		if(V[i]%k==0){
			printf("o valor [%d] na posicao %d e primo",V[i], i);
			
			P=0;
		}
	}
}

return 0;
}
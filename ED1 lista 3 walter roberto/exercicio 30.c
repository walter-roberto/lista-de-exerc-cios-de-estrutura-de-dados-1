#include <stdio.h>

int main(){

int V[10],V2[10],V3[10]x=0;achou=0;
	
printf("digite valoes para preencher o primeiro vetor\n");

for(int i=0;i<10;i++){
	scanf("%d",&V[i]);
}

printf("digite valores para preencher o segundo vetor\n");

for(int i=0;i<10;i++){
	scanf("%d",&V2[i]);
}	

for(int i=0;i<10;i++){
	for(int k=0;k<10;k++){
	
	if(V[i] == V2[k]){
		achou=0;
		
		for(int m=0;m<x;m++){
			
			if(V[i]==V3[m]){
				achou=1;
				break;
			}
			
		}
	
	if(achou==0){
		V3[x]=V1[i];
		x++;
	}	
	
	}
	}
}

return 0;
}
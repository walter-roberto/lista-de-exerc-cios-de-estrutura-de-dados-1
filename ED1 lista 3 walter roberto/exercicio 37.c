#include <stdio.h>
int main(){
	
	int V[11],x=0;
	
	printf("digite valores para preencher o vetor\n");
	for(int i=0;i<11;i++){
		scanf("%d",V[i]);
	}
	
	for(int i=0;i<6;i++){
		for(int k=0;k<5;k++){
		        
			if(V[k]>V[k+1]){
				x=V[k];
				V[k]=V[k+1];
				V[k+1]=x;
				
				
			} 
		}
	}
	
	for(int i=5;i<11;i++){
		for(int k=6;k<10;k++){
			
			if(V[k]<V[k+1]){
				x=V[k];
				V[k]=V[k+1];
				V[k+1]=x;
			}
		}
	}
	
	for(int i=0;i<11;i++){
		printf("%d [%d]",i,V[i]);
	}

return 0;
}
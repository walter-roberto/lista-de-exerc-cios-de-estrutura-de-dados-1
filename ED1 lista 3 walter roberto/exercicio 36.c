#include <stdio.h>

int main(){
	
	float V[10],x;
	
	printf("digite valores reais para preencher o vetor\n");
	scanf("%f",V[0]);
	
	for(int i=1;i<10;i++){
	
	    scanf("%f",&x);
	    
	    for(int k=0;k<i;k++){
	    	if(x<V[k]){
	    		V[k+1]=V[k];
	    		V[k]=x;
	    		
			}else{
				V[k]=x;
			}
		}
	
	}
	for(int i=0;i<10;i++){
		printf("%d [%d]\n",i,V[i]);
	}
	

return 0;

}
#include <stdio.h>
int main(){
	int V[100],N=1;
	
	for(int i=0; i<100; i++){
		if(N %7 !=0 && N%10!=7){
			V[i]=N;
		}else{
			i--;
		}
		N++;		
	}
	for(int i=0;i<100;i++){
		printf("posicao %d [%d] \n",i+1,V[i]);
	}
	
	return 0;
}
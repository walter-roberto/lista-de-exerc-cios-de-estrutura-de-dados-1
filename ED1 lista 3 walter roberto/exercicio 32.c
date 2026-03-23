#include <stdio.h>


int main(){
	int X[5],Y[5],soma[5],produto[5],dif[5],inter[5],uni[10],checagem=0;
	
	printf("digite valores para preencher o primeiro vetor \n");
	
	for(int i=0;i<5;i++){
		scanf("%d",&X[i]);
	    uni[i]=X[i];
	}
	
	printf("digite valores para preencher o segundo vetor \n");
	
	for(int i=0; i<5; i++){
		scanf("%d",&Y[i]);
	}
	
	for(int i=0; i<5; i++){
		soma[i]=X[i]+Y[i];
	}
	
	for(int i=0;i<5;i++){
		produto[i]=X[i]*Y[i];
	}
	
	for(int i=0;i<5;i++){
		
		checagem=0;
		
		for(int k=0;k<5;k++){
			if(Y[k]==X[i]){
				checagem=1;
				break;
			}
			if(checagem!=1){
				dif[i]=X[i];
			}
		}
	}
	
	for(int i=0;i<5;i++){
		
		
		for(int k=0;k<5;k++){
			if(X[i]==Y[k]){
			inter[i]=X[i];
			break;
			}
	    }
	}
	
	for(int i=0; i<5; i++){
		
		checagem=0;
		
		for(int k=0;k<5;k++){
			if(Y[i]==X[k]){
				checagem=2;
				break;
			}
		}
		if(checagem!=2){
			uni[i+5]=Y[i];
		}
		
	}
	
	return 0;
}
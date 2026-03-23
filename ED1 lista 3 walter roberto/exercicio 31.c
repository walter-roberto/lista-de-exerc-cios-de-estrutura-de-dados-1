#include <stdio.h>

int main(){

int V[10],V2[10],V3[20],x=10,igual=0;

printf("digite valores para preencher o primeiro vetor\n");

for(int i=0;i<10;i++){
	scanf("%d",V[i]);
	V3[i]=V[i];
}

printf("digite valores para preencher o segundo vetor\n");
for(int i=0;i<10;i++){

    scanf("%d",V2[i]);
    for(int k=0;k<x;k++){
    	
    	igual=0;
		if(V2[i]==V3[k]){
			
			igual=1;
			break;
		}
		if(igual==0){
			V3[x]=V2[i];
			x++;
		}
	}
}


return 0;
}
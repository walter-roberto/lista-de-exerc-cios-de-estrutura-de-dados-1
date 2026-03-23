#include <stdio.h>

int main(){

int V[10],V1[10],V2[10],x=0,y=0;
	
printf("digite os valroes para preencher o vetor\n")
	
	for(int i=0;i<10;i++){
	
	scanf("%d",&V[i]);
	if(V[i]%2==0){
		V2[x]=V[i];
		printf("o valor %d e par e esta na posicao %d",V2[x],x);
		x++;
	}
	else{
		V1[y]=V[i];
		printf("o valor %d e impar e esta na posicao %d",V1[y],y);
		y++;
	}
}	
	
return 0;
}
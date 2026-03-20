#include<stdio.h>
int main(){
int V[20],teste,k=0;

printf("digite valores para preeencher o vetor\n");

for(int i=0;i<19;i++){
	scanf("%d",&V[i]);
}
for(int i=0;i<19;i++){
	teste=0;
	for(int k=i+1;k<19;k++);
	if(V[k]==V[i]){
		teste=1;
	}
	if(teste=1){
		printf("valor repetido\n");
	}
	else{
		printf("[%d] na posicao %d",V[i],i);
	}
}

return 0;
}
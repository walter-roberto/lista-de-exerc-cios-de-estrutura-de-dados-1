#include<stdio.h>
int main(){
int V[10];

printf("digite valores para preencher o vetor\n");

for(int i=0;i<10;i++){
	scanf("%d",V[i]);
}
for(int i=0;i<10;i++){
	for(int k=i+1;k<10;k++){
		if(V[k]==V[i]){
			printf("o valor %d na posicao %d, esta repetido na posicao %d \n",V[k],k,i);
		}
	}
}

return 0;
}
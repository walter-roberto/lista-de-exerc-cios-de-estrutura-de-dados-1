#include<stdio.h>
int main(){
int V[5],maior=0,menor=0,posimaior=0,posimenor=0;

printf("digite valores para preencher o vetor\n");
scanf("%d",&V[0]);
maior=V[0];
menor=V[0];

for(int i=1;i<5;i++){
	scanf("%d",V[i]);
	
	if(V[i]<maior){
		maior=V[i];
		posimaior=i;
	}
	if(V[i]<menor){
		menor=V[i];
		posimenor=i;
	}
}

printf("o local do menor valor no vetor e %d\n",posimenor);
printf("o local do maior valor no vetor e %d\n",posimaior);

return 0;
}
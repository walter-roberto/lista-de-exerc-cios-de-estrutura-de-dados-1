#include<stdio.h>
int main(){
int V[5],maior=0,menor=0,media=0;

printf("digite um valor para preencher o vetor\n");
scanf("%d",V[0]);
maior=V[0];
menor=V[0];
media+=V[0];

for(int i=1;i<5;i++){
	scanf("%d",&V[i]);
	
	if(V[i]>maior){
		maior=V[i];
	}
	if(V[i]<menor){
		menor=V[i];
	}
	
	media+=V[i];
}
media=media/5;

for(int i=0;i<5;i++){
	printf("[%d] ",V[i]);
}

printf("\n");
printf("o maior e %d",maior);
printf("o menor e %d",menor);
printf("a media e %d",media);

return 0;
}
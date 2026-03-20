#include<stdio.h>
int main(){
	V[6],teste;
	
	printf("digite valores pares para preencher o vetor/n");
	
	for(int i=0;i<6;i++){
		scnaf("%d",&teste);
		if(teste %2!=0){
			printf("valor invalido favor digitar um valor par");
			i--;
		}
		else{
			V[i]=teste;
		}
	}
	
	for(int i=5;i<-1;i--){
		printf("[%d] ",V[i]);
	}
	reuturn 0;
}
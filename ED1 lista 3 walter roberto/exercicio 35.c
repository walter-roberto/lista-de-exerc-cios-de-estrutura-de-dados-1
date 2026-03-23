#include <stdio.h>

int main(){
	
	int V[5],V2[5],Vsoma[6], x,y,extra=0,soma;
	
	printf("digite um valor positivo abaixo de 10000");
	scanf("%d",&x);
	printf("digite o segundo valor positivo abaixo de 10000");
	scanf("%d,"&y);
	
	
	for(int i=0;i<5;i++){
		
		V[i]=x%10;
		x=x/10;
		
		V2=y%10;
		y=y/10;
	}
	
	for(int i=0;i<5;i++){
		soma=V[i]+V2[i]+extra;
		
		if(soma>=10){
			V3[i]=soma-10;
			extra=1;
		}
		else{
			V3[i]=soma;
			extra=0;
		}
	}
	
	V3[5]=extra;

return 0;

}
#include<stdio.h>
int main(){
  int matriz[3][3],soma=0;
  for(int i=0;i<3;i++){
  	for(int k=0;k<3;k++){
	  printf("digite um numero para preencher a matriz\n");
       scanf("%d",&matriz[i][k]);
    }
   }
   printf("os elementos da matriz sao\n"); 
for(int i=0;i<3;i++){
  	for(int k=0;k<3;k++){
	  if(matriz[i][k]%2!=0){
	  	soma+=matriz[i][k];
	  	}
	 printf("%d ",matriz[i][k]); 	
    }
   printf("\n");
   }
printf("a soma dos elementos impares e %d",soma);
return 0;
}
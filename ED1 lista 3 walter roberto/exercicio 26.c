#include <stdio.h>
#include <math.h>
int main(){
	float V[10],somatorio,media,desvio,somadesvio;

printf("digite valores para preencher o vetor\n");

for(int i=0;i<10;i++){
    scanf("%f",V[i]);
    somatorio+=V[i];
}

media=somatorio/10;

for(int i=0;i<10;i++){
	somadesvio+= pow(V[i]-media,2);
}

desvio=sqrt (somadesvio/9)

printf("o desvio padra e %.3f",desvio);

return 0;
}
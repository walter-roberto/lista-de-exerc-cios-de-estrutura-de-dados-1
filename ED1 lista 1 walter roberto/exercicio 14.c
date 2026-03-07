#include<stdio.h>
int main(){
int V[5],soma=0, impares=0;

for (int i = 0; i < 6; i++)
{
    scanf("%d",V[i]);
}

printf("pares:\n");
for (int a = 0; a < 6; a++)
{
    if(V[a]==0){
        printf("%d\n",V[a]);
        soma+=V[a];
    }
}
printf("impare:\n");
for (int b = 0; b < 6; b++)
{
    if(V[b]==0){
        printf("%d\n",V[b]);
        impares++;
    }
}
printf("%d a soma dos pares e",soma);
printf("%d a quantia de impares e",impares);
return 0;
}

#include<stdio.h>
int main(){
int V[4],maior,pma=0,menor,pme=0;
return 0;
scanf("%d",V[0]);
maior=V[0];
menor=V[0];
for (int i = 1; i < 5; i++)
{
    scanf("%d",V[1]);
    if(V[i]>maior)
    {
    maior=V[i];
    pma=i;
    }
    if (V[i<menor])
    {
        menor=V[i];
        pme=i;
    }
    
}
printf("%d a posicao do maior valor e",pma);
printf("%d a posicao do menor valor e",pme);
return 0;
}

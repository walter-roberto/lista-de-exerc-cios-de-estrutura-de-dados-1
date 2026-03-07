#include<stdio.h>
int main(){
int V[4],maior=-99999999,menor=999999999,media;
for (int i = 0; i < 5; i++)
{
    scanf("%d",&V[i]);
    if (V[i]>maior)
    {
        maior = V[i];
    }
    
    if (V[i] < menor)
    {
        menor = V[i];
    }
    media+=V[i];
}
printf("%d o maior valor e",maior);
printf("%d o menor valor e",menor);
printf("%d a media e",media/5);
return 0;
}
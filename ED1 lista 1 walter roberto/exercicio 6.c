#include<stdio.h>
int main(){
int V[9], maior=0,menor=0;
scanf("%d",&V[0]);
maior=V[0];
menor=V[0];
for (int i = 1; i <= 9; i++)
{
    scanf("%d",&V[i]);
    if (V[i]>maior)
    {
        maior=V[i];
    }
    if (V[i]<menor)
    {
        menor=V[i];
    }
    
}
printf("%d o maior valor e",maior);
printf("%d,o menor valor e", menor);
return 0;
}
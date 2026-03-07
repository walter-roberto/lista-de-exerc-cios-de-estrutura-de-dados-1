#include<stdio.h>
int main(){
int V[9],Vp[9],Vi[9];

for (int i = 0; i < 10; i++)
{
    scanf("%d",V[i]);
    if (V[i]%2==0)
    {
        Vp[i]=V[i];
    }
    else
    {
        Vi[i]=V[i];
    }
    printf("%d",V[i]);
    printf("%d",Vp[i]);
    printf("%d",Vi[i]);
}
    return 0;
}
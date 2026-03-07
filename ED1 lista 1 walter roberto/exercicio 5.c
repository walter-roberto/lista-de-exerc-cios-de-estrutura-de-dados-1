#include<stdio.h>
int main(){
int V[9];
for (int i = 0; i <= 9; i++)
{
    scanf("%d",&V[i]);
    if (V[i]%2==0)
    {
       printf("%d",V[i]);
    }
    
}
    return 0;
}
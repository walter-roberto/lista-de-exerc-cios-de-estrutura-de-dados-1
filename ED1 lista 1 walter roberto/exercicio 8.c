#include<stdio.h>
int main(){
int V[5];
for (int i = 0; i <= 5; i++)
{
    scanf("%d",&V[i]);
}
for (int a = 5; a <= 0; a--)
{
    printf("%d",V[a]);
}
return 0;
}
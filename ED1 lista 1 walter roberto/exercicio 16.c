#include<stdio.h>
int main(){
int a[4],y[4];
for (int i = 0; i < 5; i++)
{
    scanf("%d",a[i]);
}
for (int i = 0; i < 5; i++)
{
    scanf("%d",y[i]);
}
for (int i = 0; i < 5; i++)
{
    printf("%d,%d",a[i]+y[i]);
}
for (int i = 0; i < 5; i++)
{
    printf("%d,%d",a[i]*y[i]);
}
for (int i = 0; i < 5; i++)
{
    for (int d = 0; d < 5; d++)
{
    if (a[d]!=y[i])
    {
        printf("%d",a[d]);
    }
    
}
for (int i = 0; i < 5; i++)
{
    for (int d = 0; d < 5; d++)
{
    if (a[d]==y[i])
    {
        printf("%d",a[d]);
    }
}
return 0;
}
}
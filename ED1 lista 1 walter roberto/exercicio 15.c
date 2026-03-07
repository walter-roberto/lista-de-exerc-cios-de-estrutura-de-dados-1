#include<stdio.h>
int main(){
int V1[9],V2[9],V3[9],teste=0;
for (int i = 0; i < 10; i++)
{
    scnaf("%d",&V1[i]);
}
for (int i = 0; i < 10; i++)
{
    scnaf("%d",&V2[i]);
}
for (int d = 0; d < 10; d++)
{
    if (V1[d]==V2[d])
    {
        teste=V1[d];
        for (int i = 0; i < 10; i++)
        {
            if (teste!=V3[i])
            {
                V3[i]=teste;
                break;
            }
            
        }
        
    }
    
}

return 0;
}

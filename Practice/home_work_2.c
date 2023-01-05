#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3 /* && j!=i  */; j++)
        {
             for(k=1; k<=3 /* && k!=i && k!=j /* && j!=i **/; k++)
            {
                 if(i!=j && i!=k && k!=j)
                 {
                     
                    printf("%d %d %d \n", i, j, k);
                 }
        
            }
        }     
    }
    return 0;
}
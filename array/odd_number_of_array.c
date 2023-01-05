
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k=0,sum=0,x[4][4];

	for(i=0;i<=3;i++)
	{
		printf("Enter numbers for row %d: ",i+1);
		for(j=0;j<=3;j++)
		scanf("%d",&x[i][j]);
	}

	printf("\n");

	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		printf("%4d",x[i][j]);
		printf("\n");
	}

	printf("\n");

	for(i=0;i<=3;i++)
	for(j=0;j<=3;j++)
	sum = sum + x[i][j];

	printf("\n\nSummation of total Matrix = %d", sum);

    printf("\n All odd numbers of the Matrix. \n");
    for(i=0; i <= 3; i++)
    {
        for(j=0; j <= 3; j++)
        if(x[i][j]%2 == 1)
        {
            printf("%d ", x[i][j]);
        }
    }


	 //Print  all the Odd numbers of the Matrix:

	 //Print  all the Even numbers of the Matrix:

	 //print  all the numbers of odd Row:

	 //print  all the numbers of Even Row:

	 //print  all the numbers of odd Column:

	 //print  all the numbers of Even Column:



	
	return 0;
}

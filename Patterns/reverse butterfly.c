#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			for(j=1;j<=(2*n);j++)
			{
				if(i>(n-j+1))
				printf(" ");
				else
				printf("*");
				if((i+n)>j)
				printf(" ");
				else
				printf("*");
			}
			printf("\n");
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=(2*n);j++)
			{
				if(i<j)
				printf(" ");
				else
				printf("*");
				if(i<=((2*n)-j))
				printf(" ");
				else
				printf("*");
			}
			printf("\n");
		}
}

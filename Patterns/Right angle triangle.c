#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n value : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i<j)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}
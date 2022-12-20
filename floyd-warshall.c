#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int min(int a , int b)
{
int c = a<b?a:b ;
}

void main()
{
	int a[20][20] , b[20][20] ;
	int n ; 
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(a[i][j]==0)
			{
				a[i][j]=INT_MAX/2;
			}
		}
	}
	for(int k=0 ; k<n ; k++)
	{
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			b[i][j]=min(a[i][j],a[i][k]+a[k][j]);
		}
	}
	printf("Q^%d matrix is \n",k+1);
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			printf("%d\t",b[i][j]);
			a[i][j]=b[i][j];
		}
		printf("\n");
	}
	}	
	printf("\nMinimum distant matrix is : \n");
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

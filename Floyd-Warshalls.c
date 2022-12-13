#include<stdio.h>
#include<stdlib.h>

void main()
{
	int A0[20][20] , n, A1[20][20] , k=0;
	printf("Enter the number of nodes of graph. ");
	scanf("%d",&n);
	printf("Enter elements of adjacency matrix. ");
	for (int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++ )
		{
			scanf("%d",&A0[i][j]);
		}
	}
	
	
	for(int k=0 ; k<n ; k++)
	{
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<n ; j++)
			{
				A1[i][j] = A0[i][j] || (A0[i,k] && A0[k][j]);
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<n ; j++)
			{
				A0[i][j] = A1[i][j];
			}
		}
	}
	
	printf("Transitive CLosure of Ajacency Matrix A is : \n");
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			printf("%d\t" , A0[i][j]);
		}
		printf("\n");
	} 
}

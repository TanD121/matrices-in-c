#include<stdio.h>

void main()
{
	int m1[3][3] = {0};
	int m2[3][3] = {0};
	int result[3][3] = {0}; // matrix to store addition result
	int mul_result[3][3] = {0}; //matrix to store multiplication result

	int i,j,k = 0;                  // Iterator variables

	printf("\nEnter first matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the element at row %d & column %d : ",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}
	}

	printf("\nThe first matrix is\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d ",m1[i][j]);
		}

		printf("\n");
	}


	printf("\nEnter Second matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the element at row %d & column %d : ",i+1,j+1);
			scanf("%d",&m2[i][j]);
		}
	}


	printf("\nThe Second matrix is\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d ",m2[i][j]);
		}

		printf("\n");
	}

	// Addition of 2 matrices --------------------------------------------------------------------------------------------------------
	
	printf("\nAddition of the 2 input matrices is:\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			result[i][j] = m1[i][j] + m2[i][j];
			printf("\t%d", result[i][j]);
		}
		printf("\n");
	}

	// Multiplication of 2 matrices-----------------------------------------------------------------------------------------------------
	
	printf("\nMultiplication of the 2 input matrices is:\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				mul_result[i][j] = mul_result[i][j] + m1[i][k]*m2[k][j];
			}
			printf("\t%d",mul_result[i][j]);
		}
		printf("\n");
	}
}

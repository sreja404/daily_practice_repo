#include<stdio.h>
int sparse(int rows, int cols, int mat[][100],int c)
{
	int zcount=0,i,j;
	int totelements=rows*cols;
	printf("\n %d\t%d\t%d",totelements,c,(totelements-c));
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			if(mat[i][j]!=0)
			{
				printf("\n %d\t%d\t%d",mat[i][j],i,j);
			}		
		}
		
	}
}
void printmat(int rows,int cols, int mat[][100])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}		
}
int main()
{
	int rows , cols,i,j,c=0;
	printf("enter no of rows and cols: ");
	scanf("%d%d",&rows,&cols);
	int mat[100][100];
	printf("enter elements:\n ");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&mat[i][j]);
			if(mat[i][j]==0)
		{
			c++;
		}
		
		}
	}
	printmat(rows,cols,mat);
	if(c>=(rows*cols)/2){
		printf("it is a sparse matrix");
		sparse(rows,cols,mat,c);
	}
	else
	{
		printf("not a sparse matrix");
	}
	
}











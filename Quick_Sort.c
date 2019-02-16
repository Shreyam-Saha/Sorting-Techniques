#include<stdio.h>
#include<stdlib.h>
int Partition(int[] , int ,int );
void QuickSort(int[] , int, int );
int main()
{
	int A[100],p,r,n,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements of the ARRAY:");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("Sorting the Array using QuickSort.........\n");
	p=0;
	r=n-1;
	QuickSort(A,p,r);	
	printf("\n the elements of the sorted ARRAY:\n");
	for(i=0;i<n;i++)
		printf("%d \t",A[i]);
	
	return 0;
	
}
void QuickSort(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=Partition(A,p,r);
		QuickSort(A,p,q-1);
		QuickSort(A,q+1,r);
	
	}
	
}
int Partition(int A[],int p,int r)
{
	int q,x,i,j,temp;
	x=A[p];
	i=p;
	for(j=p+1;j<=r;j++)
	{
		if(A[j]<=x)
		{
			i=i+1;
			if(i!=j)
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	temp=A[p];
	A[p]=A[i];
	A[i]=temp;
	q=i;
	return q;
	
}


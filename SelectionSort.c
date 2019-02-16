#include<stdio.h>
void SelectionSort(int [],int);
void main()
{
	int A[50],n,i;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("\nENter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	SelectionSort(A,n);
	
	printf("\nThe sorted Array is::");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);

}
	
void SelectionSort(int A[],int n)
{
	int i,j,temp,loc;
	for(i=0;i<n-1;i++)
	{
		loc = i;
		for(j=i+1;j<n;j++)
		{
			if(A[j] < A[loc])
				loc=j;
		}
		if(i != loc)
		{
			temp=A[i];
			A[i]=A[loc];
			A[loc]=temp;
		}
	}

}

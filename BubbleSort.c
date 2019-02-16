#include<stdio.h>
void BubbleSort(int [],int);
void main()
{
	int A[50],n,i;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("\nENter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	BubbleSort(A,n);
	
	printf("\nThe sorted Array is::");
	for(i=0;i<n;i++)
		printf("%5d",A[i]);

}
	
void BubbleSort(int A[],int n)
{
	int i,j,temp,swap;
	swap = 1;
	for(i=0;i<n && swap == 1;i++)
	{
		swap = 0;
		for(j=0;j<n-i-1;j++)
		{
			if(A[j] > A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				swap = 1;
			}
		}
	}
}

 #include<stdio.h>
void InsertionSort(int [],int);
void main()
{
	int A[50],n,i;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("\nENter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	InsertionSort(A,n);
	
	printf("\nThe sorted Array is::");
	for(i=0;i<n;i++)
		printf("%5d",A[i]);

}
	
void InsertionSort(int A[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=A[i];
		j=i-1;
		while(j>=0 && temp<A[j])
		{
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=temp;
	}
}

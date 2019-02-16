#include<stdio.h>
#include<stdlib.h>
void MergeSort(int[],int ,int);
void Merge(int[],int,int,int );
int main()
{
	int n,i,p,r,A[50];
	printf("\n Enter the number of elements:");
	scanf("%d",&n);
	printf("\nEnter the Array elements:");	
	for(i=0;i<n;++i)
		scanf("%d",&A[i]);
	p=0;
	r=n-1;
	MergeSort(A,p,r);
	printf("\nThe Sorted Array becomes:");
	for(i=0;i<n;i++)
		printf("%d \t",A[i]);
	return 0;

}
void MergeSort(int A[],int p, int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		MergeSort(A,p,q);
		MergeSort(A,q+1,r);
		Merge(A,p,q+1,r);
	}
		
}
void Merge(int A[],int ls,int rs, int re)
{
	int k,le,i,j,Temp[50];
	k=0;
	le=rs-1;
	i=ls;
	j=rs;
	while(i<=le && j<=re)
	{	
		if(A[i]<A[j])
		{
			k=k+1;
			Temp[k]=A[i];
			i=i+1;
		}
		else
		{
			k=k+1;
			Temp[k]=A[j];
			j=j+1;
		}
	}
	while(i<=le)	
	{
		k=k+1;
		Temp[k]=A[i];
		i=i+1;
	}
	while(j<=re)	
	{
		k=k+1;
		Temp[k]=A[j];
		j=j+1;
	}
	for(i=1;i<=k;++i)
		A[ls-1+i]=Temp[i];
	
	return;
}

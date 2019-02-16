#include<stdio.h>
#include<stdlib.h>
void HeapSort(int[],int);
void BuildMaxHeap(int[],int);
void MaxHeapify(int[],int ,int);
int main()
{
	int A[50],n,i;
	printf("\nEnter The number of Elements:");
	scanf("%d",&n);
	printf("\nEnter the ELEMENTS:");
	for(i=1;i<=n;++i)
		scanf("%d",&A[i]);
	HeapSort(A,n);
	printf("\nThe Sorted Array is:");
	for(i=1;i<=n;++i)
		printf("%d\t",A[i]);
	return;
}
void HeapSort(int A[],int n)
{	
	int i,temp;
	BuildMaxHeap(A,n);
	for(i=n;i>=2;i--)
	{
		temp=A[i];
		A[i]=A[1];
		A[1]=temp;
		MaxHeapify(A,1,i-1);
	}
		
}
void BuildMaxHeap(int A[],int n)
{	
	int i;
	for(i=n/2;i>=1;i--)
		MaxHeapify(A,i,n);
}
void MaxHeapify(int A[],int j, int n)
{
	int child,item,par;
	child=2*j;
	item=A[j];
	while(child<=n)
	{
		if(child<n && A[child]<A[child+1])
			child=child+1;
		if(item>=A[child])
			break;
		par=child/2;
		A[par]=A[child];
		child=2*child;
	}
	par=child/2;
	A[par]=item;
	return;
}

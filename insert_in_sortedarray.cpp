#include <stdio.h>
#include <stdlib.h>
struct array
{
	int A[10];
	int size;
	int length;
};
void display(struct array arr)
{
	int i;
	printf("elements are:\n");
	for(i=0;i<arr.length;i++)
	printf("%d",arr.A[i]);
}
void append(struct array *arr,int x)
{
	if(arr->length<arr->size)
	arr->A[arr->length++]=x;
}
void InsertSort(struct array *arr,int x)
{
	int i=arr->length-1;
	if(arr->length==arr->size)
	return;
	while(i>=0 && arr->A[i]>x)
	{
		arr->A[i+1]==arr->A[i];
		i--;
	}
	arr->A[i+1]=x;
	arr->length++;
}
int main()
{
	struct array arr={{2,3,5,10,15},10,5};
	InsertSort(&arr,8);
	display(arr);
	return 0;
	}


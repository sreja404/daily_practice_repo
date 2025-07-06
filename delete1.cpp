#include<stdio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
int Delete(struct Array *arr,int index)//index parameter will tell which index to delete
{
 int x=0;//taking a variable to later save the value to be deleted then return it
 int i;
 if(index>=0 && index<arr->length)
 {
 x=arr->A[index];
 for(i=index;i<arr->length-1;i++)//shifting all values after deletion of element
 arr->A[i]=arr->A[i+1];//for example A[i] becomes 3 after deletion of 2 because A[i+1] was 3(it shifted)
 arr->length--;//decreasing logical size(which was 5 before deletion now becomes 4)
 return x;
 }
 return 0;//if index does not exist
}
int main()
{
 struct Array arr1={{2,3,4,5,6},10,5};
 printf("%d",Delete(&arr1,0)); //passing arguments to delete element at index 0
 Display(arr1);
 return 0;
}

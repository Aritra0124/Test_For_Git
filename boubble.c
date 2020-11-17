/*Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. 
The pass through the list is repeated until the list is sorted.*/
#include<stdio.h>

void display(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("%d \t",a[i]);
 }
 printf("\n");
}

void bubble(int a[],int n)
{
 int t,p,i;
 for(p=0;p<n-1;p++)
 {
  for(i=0;i<n-p;i++)
  {
   if(a[i]<a[i+1])
    break;
   else
   {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
   }
  }
 }
}

int main()
{
 int a[50];
 int i,n;
 printf("enter the no of elements \n");
 scanf("%d",&n);
 printf("enter the elements \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 bubble(a,n);
 display(a,n);
 return(0);
}

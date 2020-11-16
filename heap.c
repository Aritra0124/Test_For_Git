#include<stdio.h>
void heap_sort(int a[],int);
void insert_heap(int a[],int,int);
void del_heap(int a[],int);

void display(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 printf("\n");
}

void heap_sort(int a[],int n)
{
 int i;
 for(i=0;i<=n-1;i++)
 {
  insert_heap(a,i,a[i+1]);
 }
// display(a,n);
 while(n>0)
 {
  del_heap(a,n);
  n=n-1;
//  display(a,n);
 }
}

void insert_heap(int a[],int n,int item)
{
 int loc,por;
 n=n+1;
 loc=n;
 a[loc]=item;
 while(loc>0)
 {
  por=loc/2;
  if(item<=a[por])
  {
    a[loc]=item;
   return;
  }
  else
  {
   a[loc]=a[por];
   loc=por;
  }
 }
 a[0]=item;
 return;
}

void del_heap(int a[],int n)
{
 int item,last,loc,left,right,i;
 item=a[0];
 last=a[n];
 a[n]=item;
 n=n-1;
 loc=0,left=1,right=2;
 while(right<=n)
 {
  if(last>=a[left] && last>=a[right])
  {
   a[loc]=last;
   return;
  }
  if(a[right]<=a[left])
  {
   a[loc]=a[left];
   loc=left;
  }
  else
  {
   a[loc]=a[right];
   loc=right;
  }
  left=2*loc;
  right=left+1;
 }
 if(left==n && last<a[left])
 {
  a[loc]=a[left];
  loc=left;
 }
 a[loc]=last;
 return;
 }

int main()
{
 int a[50];
 int i,n;
 printf("enter the no of elements: \n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter the %d  no: \n",i+1);
  scanf("%d",&a[i]);
 }
 heap_sort(a,n-1);
 printf("the sorted list is: \n");
 display(a,n);
 return(0);
}

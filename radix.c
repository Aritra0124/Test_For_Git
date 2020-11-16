#include<stdio.h>
struct buk
{
 int rear;
 int pos;
 int no;
};


void display(struct buk a[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf(" %d \t",a[i].no);
 }
 printf("\n");
}


void display1(struct buk a[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("rear= %d   end= %d   no= %d  \n",a[i].rear,a[i].pos,a[i].no);
 }
 printf("\n");
}


//radix sort


void radix(struct buk a[],int n)
{
 int i,t,p;

//calculating last digit

 for(i=0;i<n;i++)
 {
  a[i].pos=a[i].no%10;
 }
// display1(a,n);
//sorting based on last digit


 for(p=0;p<n-1;p++)
 {
  for(i=0;i<n-p-1;i++)
  {
   if(a[i].no<a[i+1].no)
   {
    break;
   }
   else
   {
    t=a[i].no;
    a[i].no=a[i+1].no;
    a[i+1].no=t;
   }
  }
 }

//calculating first digit

 for(i=0;i<n;i++)
 {
  a[i].rear=a[i].no/10;
 }

//cheaking the nos

 for(i=0;i<n;i++)
 {
  if(a[i].rear==0)
  {
   display(a,n);
   break;
  }
  else
  {


//sorting based on first digits


   for(p=0;p<n-1;p++)
   {
    for(i=0;i<n-p-1;i++)
    {
     if(a[p].rear<a[i+1].rear)
     {
      break;
     }
     else
     {
      t=a[i].no;
      a[i].no=a[i+1].no;
      a[i+1].no=t;
     }
    }
   }
  display(a,n);
  }
 }
}

int main()
{
 struct buk a[50];
 int i,n,t,p;
 printf("enter the no of elements: \n");
 scanf("%d",&n);
 printf("enter the nos:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i].no);
 }
 printf("\n");
 printf("\nthe enter nos is\n");
 display(a,n);
 radix(a,n);
 printf("\nthe sorted list is: \n");
 display(a,n);
 return(0);
}

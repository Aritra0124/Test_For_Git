
#include<stdio.h>

struct data
{
 int expo;
 int coff;
};



/*int multy(struct data a[],struct data b[],int p,int q)
{
 int i,j,k=0;
 struct data t[100];
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
  {
   t[k].coff=a[i].coff*b[j].coff;
   t[k].expo=a[i].expo+a[j].expo;
   k++;
  }
 }
return(t);
}*/



int main()
{
 struct data a[50];
 struct data b[50];
 struct data c[100];
 struct data t[100];
 int p, r,i,j,k,n,m,d=0;
 printf("enter the no on elements in the 1st polynomial: \n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter the coff & expo: \n");
  scanf("%d%d",&a[i].coff,&a[i].expo);
 }
 printf("enter the no of elements in the 2nd polynomial: \n");
 scanf("%d",&m);
 for(i=0;i<m;i++)
 {
  printf("enter the coff & expo: \n");
  scanf("%d%d",&b[i].coff,&b[i].expo);
 }


/* multiplication of polynomial */

 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   t[d].coff=a[i].coff*b[j].coff;
   t[d].expo=a[i].expo+b[j].expo;
   d++;
  }
 }

 k=n*m;

/* arrenegment of result */




/* for(i=0;i<k;i++)
 {
  for(j=i+1;j<k-1;)
  {
   if(t[i].expo==t[j+1].expo)
   {
    r=t[j+1].coff;
    t[i].coff=t[i].coff+r;
    j=j+1;
    for(p=j+1;p<k-2;p++)
    {
     t[p].coff=t[p+1].coff;
     t[p].expo=t[p+1].expo;
    }
   }
   else
   {
    t[i].coff=t[i].coff;
   }
  }
 }
*/

/* printing the result */

 printf("The resultant polynomial is: \n");

 for(i=0;i<k;i++)
 {
  if(i<k-1)
  {
   printf(" %d x^ %d + ",t[i].coff,t[i].expo);
  // if(c[i].coff==0)
   {
    continue;
   }
  // else
   printf(" %d x^ %d +",t[i].coff,t[i].expo);
  }
  else
   printf(" %d x^ %d ",t[i].coff,t[i].expo);
 }
 printf("\n");
 return(0);
}


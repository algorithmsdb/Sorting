#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int p, int q, int r)
{
    int n1 = q-p+1, n2 = r-q, L[n1+1], R[n2+1];
    int i,j,k;
    for( i = 0;i<n1;i++)
    L[i]=a[p+i];
    for( i=0;i<n2;i++)
    R[i]=a[q+i+1];

    L[n1]=R[n2]=9999999999;

    i=j=0;

    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
}


void sort(int a[], int p, int r)
{
      if(p<r)
      {
          int q=(p+r)/2;
          sort(a,p,q);
          sort(a,q+1,r);
          merge(a,p,q,r);
      }
}


int main()
{
     printf("enter array size :\n");
     int size,i;
     scanf("%d",&size);
     int a[size];
     printf("enter elements: \n");
     for(i=0;i<size;i++)
        scanf("%d",&a[i]);
     int r=size;
     printf("\nBefore Sorting Array\n");
     for( i =0;i<r;i++)
             printf("%d\t",a[i]);
     sort(a,0,r);

    printf("\nAfter Sorting Array\n");
     for( i =0;i<r;i++)
          printf("%d\t",a[i]);
}





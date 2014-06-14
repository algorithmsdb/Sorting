#include<bits/stdc++.h>
using namespace std;

void quicksort(int a[],int first,int last)
{
    int pivot,j,temp,i;

     if(first<last)
     {
         pivot=first;
         i=first;
         j=last;

         while(i<j)
         {
             while(a[i]<=a[pivot]&&i<last)
                 i++;
             while(a[j]>a[pivot])
                 j--;
             if(i<j)
             {
                 temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
             }
         }

         swap(a[pivot],a[j]);

         quicksort(a,first,j-1);
         quicksort(a,j+1,last);

    }
}

int main()
{
  int size,i;

  printf("Enter size of the array: ");
  scanf("%d",&size);
  int a[size];

  printf("Enter %d elements:\n ",size);
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);

  quicksort(a,0,size-1);

  printf("Sorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d",a[i]);
}

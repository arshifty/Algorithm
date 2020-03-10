#include<stdio.h>
using namespace std;
int main()
{

    int arr[100] , a[100];
    int i,j,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }


    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
               if(arr[i] > arr[j])
               {
                   int temp = arr[i];
                   arr[i] = arr[j];
                   arr[j]= temp;
               }

        }

    }

    printf("\n\noutput");
    for(i=0;i<n;i++)
    {
     printf(" %d",arr[i]);
    }


    return 0;
}

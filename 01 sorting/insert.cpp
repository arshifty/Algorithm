#include<stdio.h>

using namespace std;

int main()
{

    int a[100],key,size,i,j;


    while(scanf("%d",&size)!=EOF)
    {

        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }





         for(i=1;i<size;i++)
        {
           key=a[i];
           j=i-1;

           while(j>=0)
           {
               if(key<a[j])
               {
                   a[j+1]=a[j];
               }
               else
                break;

               j--;
           }

           a[j+1]=key;
        }


        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}

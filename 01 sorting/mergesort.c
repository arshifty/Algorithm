#include<stdio.h>


int i,n,a[2000002],temp[2000002];
int marge(int a[],int start,int end)
{
    int i,mid;


            if(end<=start)
            {
                return ;
            }
            else
            {
                mid=(start+end)/2;
                marge(a,start,mid);
                marge(a,mid+1,end);
                margesort(a,start,mid,end);
            }



}

int margesort(int a[],int start,int mid,int end)
{
int index=0,i,j,k;
    i=start;
    j=mid+1;

    while(i<=mid && j<=end)
    {
        if(a[i]<a[j])
        {
            temp[index]=a[i];
            i++;

        }
        else
           {
                 temp[index]=a[j];
                 j++;
           }

        index++;

    }


    while(i<=mid)
    {
        temp[index]=a[i];
        i++;
        index++;
    }

    while(j<=end)
    {
        temp[index]=a[j];
        j++;
        index++;
    }

    for(i=start,k=0;i<=end;i++)
    {
        a[i]=temp[k];
        k++;
    }

}


int main()
{

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }

     marge(a,0,n-1);

     for(i=0;i<n;i++)
     {
         printf("%d",a[i]);
          if (i<(n-1))
            printf(" ");
     }
      printf("\n");
    }

    return 0;
}

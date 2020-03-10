#include<stdio.h>
int main()
{
    int val[100];
    int i,n,key,loc,ck;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&val[i]);

    }
    scanf("%d",&key);
    ck=0;
    for(i=0;i<n;i++)
    {
        if(val[i]==key)
           ck=1;
           loc=i+1;
    }
    if(ck==1)
        printf("%d",loc);
    else
        printf("NO");
}

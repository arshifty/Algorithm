/*
#include <stdio.h>

#define sz 500000
#define inf 1000000000
long a[sz+2],cnt,L[sz+2],R[sz+2];

void merge(long p,long q,long r){
 long i,j,k,ind1,ind2;

 for(i = p,ind1 = 1;i <= q;i++){
  L[ind1++] = a[i];
 }
 L[ind1] = inf;

 for(i = q+1,ind2 = 1;i <= r;i++){
  R[ind2++] = a[i];
 }
 R[ind2] = inf;

 i = j = 1;

 for(k = p;k <= r;k++){
  if(L[i] > R[j]){
   cnt += ind1 - i;
   a[k] = R[j];
   j++;
  }
  else{
   a[k] = L[i];
   i++;
  }
 }
}

void mergeSort(long p,long r){
 if(p < r){
  long q = (p+r)/2;
  mergeSort(p,q);
  mergeSort(q+1,r);
  merge(p,q,r);
 }
}

int main(){
 long i,n;

 while(scanf("%ld",&n)&&n){
  for(i = 1;i <= n; i++){
   scanf("%ld",&a[i]);
  }
  cnt = 0;
  mergeSort(1,n);
  printf("%ld\n",cnt);
 }

 return 0;
}



*/



#include<bits/stdc++.h>
using namespace std;
long long temp[1000005];
long long  merge(long long arra[],long long l,long long r)
{
    long long mid=(l+r)/2;
    long long i=l,j=mid+1,k=l;
    long long inversion=0;
    while(i<=mid && j<=r)
    {
        if (arra[i]<=arra[j])
        {
            temp[k++]=arra[i++];
        }
        else
        {
            temp[k++]=arra[j++];
            inversion = inversion + mid-i+1;
        }

    }

    while (i<=mid)
    {
        temp[k++]=arra[i++];
    }
    while(j<=r)
    {
        temp[k++]=arra[j++];
    }
    for (i=l; i<=r; i++)
    {
        arra[i]=temp[i];
    }
    return inversion;
}

long long merge_sort(long long a[],long long l,long long r)
{
    long long mid,inversion=0;
    if (r>l)
    {
        mid=(l+r)/2;
        inversion=merge_sort(a,l,mid);
        inversion+=merge_sort(a,mid+1,r);
        inversion+=merge(a,l,r);
    }
    return inversion;
}
int main()
{
    long long n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            return 0;
        long long i;
        long long a[n];
        for (i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long ans;
        ans=merge_sort(a,0,n-1);
        cout<<ans<<endl;

    }
    return 0;
}


///binary search
#include<stdio.h>
int main()
{
    int BEG,END,MID,LB,UB,ITEM,LOC;
    int i,j;
    int DATA[100]={10,20,30,40,50,80,90,45,68};
    BEG=0;
    END=8;
    scanf("%d",&ITEM);
    do
    {
      MID= (int)((BEG+END)/2);
      if(ITEM==DATA[MID])
        {
         LOC=MID+1;
         printf("%d\n",LOC);
         break;
        }
      else if(ITEM<DATA[MID])
      {
          END=MID-1;
      }
      else if(ITEM>DATA[MID])
      {
         BEG=MID+1;
      }
    }while(BEG<=END);
}

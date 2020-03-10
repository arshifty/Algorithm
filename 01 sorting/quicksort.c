#include<stdio.h>


int main()
{
    int i;
    int size=9;
    int array[]={15,2,7,6,11,8,4,16,5};


    divide(array,0,9-1);

    for(i=0;i<size;i++)
    {

        printf("%d ", array[i]);
    }

    return 0;
}

int divide(int array[],int start, int end)
{

    int pivot;
    if(start>=end)
    {
        return;
    }

    else
    {
        pivot=sort(array,start,end);
        divide(array,start,pivot-1);
        divide(array,pivot+1,end);
    }


}



int sort(int array[] , int start , int end)
{
    int i,j,pivot;
    pivot = array[start];
    i=start;
    j=end;
    int move_ptr=1;
    while(i<j)
    {
             if(move_ptr)
             {
                  if(array[j]<pivot)
                  {
                      array[i]=array[j];
                      i++;
                      move_ptr=0;
                  }
                  else
                  {
                      j--;
                  }
             }

             else
             {

                    if(array[i]>pivot)
                    {
                        array[j]=array[i];
                        j--;
                        move_ptr=1;
                    }
                    else
                    {
                        i++;
                    }
             }

    }
    array[j]=pivot;
    return j;

}

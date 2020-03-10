#include<stdio.h>

using namespace std;
void printArray(int arr[],int n);
void SelectionSort(int arr[],int n);

int main()
{

    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);

    }

       printArray(arr, n);
       SelectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}

    void SelectionSort(int arr[], int n)
    {

        int i , j , min, val;

        for(i=0;i<n;i++)
        {
            min=arr[i];
            val = i;

            for(j=i+1;j<n;j++)
            {
                ///if(arr[j] > min) descending order
                if(arr[j] < min)
                {
                    min = arr[j];

                    val=j;
                    printf(" min %d val %d\n",min,val);

                }
            }

                ///if(min > arr[i]) descending order
             if(min < arr[i])
                {
                    printf("%d %d\n",arr[i],arr[val]);
                    int t = arr[i];
                    arr[i] = arr[val];
                    arr[val]=t;

                }


        }


    }



void printArray(int arr[],int n)
{
 for(int i=0;i<n;i++)
    {
     printf(" %d",arr[i]);
    }
}



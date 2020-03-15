#include<bits/stdc++.h>
using namespace std;
int main()
{
 char student_name[50][25];
  char str[50][25];

    int i,ln,t;

    cout<<"enter number of string : ";
    cin>>t;

    for(i=0;i<t;i++)
    {
      /// printf("\nEnter a string %d: ",i+1);
       scanf(" %[^\n]",student_name[i]);
    }



     for(i=0;i<t;i++)
    {
        strcpy( str[i],student_name[i]);

       printf("\n %s",str[i]);
    }


    cout<<"\n\n";
    int j;
    char temp;

    for(j=0;j<t;j++)
    {
         ln = strlen(student_name[j]);
       //  printf("\nparent  string %d:  strlen  %d",j+1 , ln);
           printf("\n\n before sorting :%s ",student_name[j]);
                    for(i=0;i<ln;i++)
                    {
                     ///  printf(" %c ",student_name[j][i]);

                                                for (int x = 0; x < ln-1; x++)
                                                    {
                                                      for (int y = x+1; y < ln; y++)
                                                      {
                                                         if (student_name[j][x] > student_name[j][y])
                                                         {
                                                            temp = student_name[j][x];
                                                            student_name[j][x] = student_name[j][y];
                                                            student_name[j][y] = temp;
                                                         }
                                                      }
                                                   }



                    }

                      printf("\nsorting string :%s ",student_name[j]);
       cout<<"\n";
    }


   cout<<"\nafter sorting all string : \n";
    for(i=0;i<t;i++)
    {
       printf("\n %s",student_name[i]);

    }

     int result;

    for(i=0;i<t;i++)
    {
         ln = strlen(student_name[i]);
        for(j=i+1;j<ln;j++)
        {
            result = strcmp(student_name[i],student_name[j]);
            if(result==0)
            {
                cout<<"\nmatched "<<str[i] << " = "<<str[j];
            }


        }
     ///  printf("\n %s",student_name[i]);

    }



 return 0;
}

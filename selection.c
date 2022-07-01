//Question 5
//Program to sort array using selection sort
#include<stdio.h>
void  main()
{
    int i,j;
    int min;
    int array[5]={8,1,9,0,3};
    for(i=0;i<4;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
            if(array[min]>array[j])
            {
                min=j;
            }
        }

        int temp=array[min];
        array[min]=array[i];
        array[i]=temp;
    }
    for(i=0;i<5;i++)
        printf("%d\t",array[i]);
}

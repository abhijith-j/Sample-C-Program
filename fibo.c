//Question 4
//Program to print fibonacci series
#include<stdio.h>
void main()
{
    int first=0,second=1,s=0;
    int n=10;
    printf("%d %d",first,second);
    for(int k=0;k<n-1;k++){
        s+= first+second;
        second= first;
        second=s;
        printf(" %d",s);
    }
}

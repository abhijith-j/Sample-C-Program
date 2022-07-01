//Question 4
//Program to check if number is armstrong number
//An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.Eg.153 is an amstrong number.
#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    int num=153,numCopy=154;
    int sum=0;
    while(num>0)
    {
        int rem=num%10;
        sum=rem*rem*rem;
        num=num/10;
    }
    if(sum=numCopy)
        printf("%d is an armstrong number",numCopy);
    else
        printf("%d is not an armstrong number",numCopy);
}

//end of program

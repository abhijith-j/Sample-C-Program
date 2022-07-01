//Question 3
//Program to check if string is palindrome
#include<stdio.h>
#include<string.h>
void main()
{
    char string[30]="malayalam";
    int lenOfString=strlen(string);
    int i;
    for(i=0;i<lenOfString/2;i++)
    {
        if(string[i]!=string[lenOfString-i-1])
        {
            printf("%s is not a palindrome",string);
            break;
        }
    }
    if(i==lenOfString/2)
        printf("%s is a palindrome",string);
}

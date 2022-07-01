//Question 3
//Program to reverse a string
#include<stdio.h>
#include<string.h>
void main(){
    char s[30]= "String";
    int l= strlen(s);
    for( int k=l;k>=0;k--){
        printf("%c",s[k]);
    }
}

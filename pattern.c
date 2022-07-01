//Question 2
//Program to print star pattern
#include<stdio.h>
void main(){
    for(int k=0;k<=5;k++){
        for(int j=5-k;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
}

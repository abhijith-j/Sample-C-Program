//Question 5
//Program to sort array using bubble sort in ascending order
#include<stdio.h>
void main(){
    int a[5]={5,2,8,6,7};
    for(int k=0;k<5;k++){
        for(int j=0;j<5-k;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j+1]=a[j];
                a[j+1]=temp;
            }
        }
    }
    for(int k=0;k<5;k++){
        printf("&d ",a[k]);
    }
}

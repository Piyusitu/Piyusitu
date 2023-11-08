#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    printf("Enter elements in 1st array: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements in 2nd array: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr2[i]);
    }
    printf("Sum array: ");
    for(int i=0;i<size;i++){
        printf("%d  ",arr1[i]+arr2[i]);
    }
}
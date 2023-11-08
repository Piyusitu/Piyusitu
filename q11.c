#include<stdio.h>
#include<stdbool.h>
void binary_search(int arr[],int target,int n){
    int bottom=0,top=n-1,middle;
    int index;
    bool found=false;
    while(bottom<=top){
        middle=(bottom+top)/2;
        if(arr[middle]==target){
            found=true;
            index=middle;
            break;
        }
        else if(arr[middle]>target)
            top=middle-1;
        else
            bottom=middle+1;
    }
    if(found)
        printf("Element found at index %d",index);
    else
        printf("Element not found");
}
void main(){
    int arr[]={1,2,4,7,8,9};//sorted input
    int size=6;
    binary_search(arr,7,size);
}
#include<stdio.h>
int linear_search(int arr[],int target,int n){
    int flag=0;
    int i=0;
    while(i<n){
        if(arr[i]==target){
            flag=1;
            break;
        }
        else 
            i++;
    }
    if(flag=1)
        return i;
    else
        return -1;  
}
void main(){
    int arr[]={2,3,6,1,9,7,4};
    int size=7;
    int search=linear_search(arr,6,size);
    if(search!=-1)
        printf("Element found at index %d",search);
    else
        printf("Element not found ");
}
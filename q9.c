#include<stdio.h>
void bubblesort(int arr[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted Array: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Input elements in array: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,size);
}
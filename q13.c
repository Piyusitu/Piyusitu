#include<stdio.h>
void main(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int a[size];
    printf("Input elements in the array: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Distinct Elements: \n");
    for(int i=0;i<size;i++){
        int temp=0;
        for(int j=0;j<i;j++){
            if(a[j]==a[i]){
                temp=1;
                break;
            }
        }
    if(temp!=1)
        printf("%d ",a[i]);
    }
}
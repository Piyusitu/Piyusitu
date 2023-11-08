#include<stdio.h>
void merge(int a[],int m,int b[],int n){
    int arr[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++; }
        else{
            arr[k]=b[j];
            j++; }
        k++;
    }
    while(i<m){
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n){
        arr[k]=b[j];
        j++;k++;
    }
    printf("Merged Array: \n");
    for(int x=0;x<m+n;x++){
        printf("%d ",arr[x]);
    }
}
void main(){
    int a[]={12,20,24};
    int b[]={7,8,65,105};
    int m=4,n=4;
    merge(a,m,b,n);
}
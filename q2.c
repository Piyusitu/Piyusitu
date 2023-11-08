#include<stdio.h>
#define size 6
void main(){
    int sq[size],i;
    for(i=0;i<size;i++){
        sq[i]=i*i;
        printf("%d",sq[i]);
    }
}
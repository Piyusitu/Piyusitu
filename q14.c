#include<stdio.h>
void main(){
    int size=12;
    int arr[size],oddsum=0,evensum=0,result,checkdigit;
    printf("Enter the UPC: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size-1;i++){
        if(i%2==0)
            oddsum+=arr[i];
        else    
            evensum+=arr[i];
    }
    oddsum*=3;
    printf("Step1 output: %d\n",oddsum);
    printf("Step2 output: %d\n",evensum);
    result=oddsum+evensum;
    printf("Result:%d\n",result);
    if(result%10==0)
        checkdigit=0;
    else
        checkdigit=10-(result%10);
    if(checkdigit==arr[11])
        printf("Validated");
    else
        printf("Error in barcode");
} 
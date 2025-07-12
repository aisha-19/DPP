#include<stdio.h>

//bubble sort

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    for(int j =0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}

int main(){
int arr[]={1,3,5,4,7,6,2,8};
int n =sizeof(arr)/sizeof(arr[0]);
printf("size is :%d\n",n);

bubbleSort(arr,n);
for(int i=0;i<n;i++){
    printf("%d \t",arr[i]);
}
}
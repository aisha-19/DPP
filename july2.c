#include<stdio.h>

//1.reverse an array

// int main(){
// int arr[]={1,2,3,4,5};
// int n=5;
// int st=0,end=n-1;
// while(st<=end){
//     int temp =arr[st];
//     arr[st] =arr[end];
//     arr[end]=temp;
//     st++;end--;
// }
// for(int i=0;i<n;i++){
//     printf("%d \t",arr[i]);
// }
// return 0;
// }

//2. find length of string

// int main(){
//     char str[]="aisha";
//     int length=0;
//     for(int i=0; str[i] != '\0';i++){
//        length++;
//     }
//     printf("length = %d",length);
//     return 0;
// }

//3. max el in an arr using pointers

int maxEl(int* arr,int n);

int main(){
    int arr[]={2,5,3,6,4};
    int n=5;
printf("max element =%d", maxEl(arr,n));
return 0;
}

int maxEl(int* arr,int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
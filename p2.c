#include<stdio.h>

//1. print unique elements

// int main(){
// int arr[]={1,2,5,1,2,4,1};
// int n=7.;
// int count;
// for(int i=0;i<n;i++){
//     count =0;
// for(int j=0;j<i;j++){
// if(arr[i]==arr[j]){
//     count =1;
//     break;
// }
// }
// if(count ==0){
//  printf("%d \t",arr[i]);
// }
// }
// }

//2.count vowels in a string

// int main(){
//     char str[]="aisha sharma";
//     int count =0;
//     for(int i=0;str[i] != '\0';i++){
//         if(str[i]=='a'|| str[i]=='e'|| str[i] == 'i' || str[i]=='o'||str[i]=='u'){
// count++;
//         }
//     }
//     printf("%d",count);
// }

//3. swap two numbers
int swap(int *a,int *b){
    int temp =*a;
    *a =*b;
    *b =temp;
}
int main(){
int a,b;
scanf("%d %d",&a, &b);
printf("a= %d and b= %d \n",a ,b);
swap(&a ,&b);
printf("a= %d and b= %d",a ,b);
}
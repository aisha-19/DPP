#include<stdio.h>

 //1.print single element in an array

 int singleEl(int arr[],int n){
int st =0,end=n-1;
    while(st <=end){
        int mid =st +(end-st)/2;
        if(arr[mid]!= arr[mid-1] && arr[mid]!= arr[mid+1]){
            return arr[mid];
        }
        if(mid %2==0){ //even numbered index
        if(arr[mid] == arr[mid-1]){
            end =mid-1;
        }else{
            st=mid+1;
        }
        }else{  //odd numbered index
            if(arr[mid] == arr[mid-1]){
                st =mid+1;
            }else{
                end =mid-1;
            }
        }
 }
}

int main(){
    int arr[]={1,1,2,2,3,3,5,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("single element: %d\n",singleEl(arr,n));

}


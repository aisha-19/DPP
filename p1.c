#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//1. string palindrome 

int main(){
   char str[100];
    printf("enter a string\n");
   scanf("%s", str);
   int length=0;
   while(str[length] != '\0'){
      length++;
   }
   printf("%d\n", length);
   int i,isPalindrome =1;
   int st=0,end=length-i-1;
   for(i=0;i<length/2;i++){
      if(str[st] != str[end]){
         isPalindrome = 0;
         break;
      }
      st++;end--;
   }
   if(isPalindrome){
      printf("string is palindrome \n");
   }else{
      printf("string is NOT a palindrome \n");
   }
  return 0;
}
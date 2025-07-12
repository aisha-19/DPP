#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>

// read , write , open ,close 

int main() {
    int input;
   char buffer1[50];
    input = read(0,buffer1,50);//user input -> stdin(0)
    int fd =open("sys_call.txt" , O_WRONLY | O_CREAT | O_TRUNC);
    if(fd<0){
        printf("error opening the file in write mode \n");
    }
   write(fd , buffer1 , input); 
   close(fd);
   fd =open("sys_call.txt" , O_RDONLY);
   if(fd <0){
    printf("error opening file in read mode \n");
   }
   char buffer2[100];
   int msg_read =read(fd , buffer2 , 50);
   write(1 , buffer2 , msg_read); // output on screen ->stdout(1) 
   close(fd);
    return 0;
}

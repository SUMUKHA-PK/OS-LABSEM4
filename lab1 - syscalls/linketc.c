#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{/*
int f=creat("1.txt",S_IRWXU|S_IWUSR|S_IRGRP|S_IROTH); //creates file, grants access to various users
printf("f= %d\n",f); //returns small integer value, -1 if error
write(f,"This is the input to the file\n",29);  //takes in number argument for length of input string
int fo = open("1.txt",O_RDWR|O_EXCL);  // opens and returns small positive value
if(fo<0)
{
	perror("c1");
 	exit(1);
}
printf("Opened the file= %d\n",fo);*/
char *c1="/home/student/Desktop/lab1/alarm.c";
char *c2="/home/student/Documents/4.txt";
int l=link(c1,c2);
if(l<0)
  perror("nbleh");
else
  printf("File is linked and created %d\n",l);
//int u=unlink(c2);
//printf("%d",u);
return 0;
}

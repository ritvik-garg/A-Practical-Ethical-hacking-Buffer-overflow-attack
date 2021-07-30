#include<stdlib.h>
#include<stdio.h>

int main()
{

if(setuid(5)==-1)
{
printf("Error occurred\n");
}
system("/bin/sh");
return 0;
}
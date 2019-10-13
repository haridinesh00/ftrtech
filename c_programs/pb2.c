//A program to check a valid string
#include<stdio.h>
int main()
{
char str[20],check[20][20];
int i,l,chlen;
printf("Enter a string\n");
scanf("%s",str);
l=strlen(str);
check[0]=str[0];
for(i=0;i<l;i++)
{
//chlen=strlen(check[i]);
if(check[i]==str[i])
{


#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter the string : ");
fgets(str,100,stdin);
str[strcspn(str,"\n")]='\0'; 
  //hello 5 নাহলে 6 দেখাবে \n সহ।
int len=strlen(str);
printf("%d",len);
return 0;
}

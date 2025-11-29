#include<stdio.h>
#include<string.h>
int main(){
   int size;
   printf("Enter size : ");
   scanf("%d",&size);
   getchar(); 
   // Consume \n means enter.নাহলে সেটাও স্ট্রিং এর ইনপুট হয়ে যাবে।
   char s[size];
   printf("Enter the string :\n");
   fgets(s,size,stdin);
   printf("Print the string : %s",s);
   return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
   int size;
  
   printf("Enter size : ");
   scanf("%d",&size);
   getchar(); 
  
   char s[size];
  
   printf("Enter the string :\n");
   fgets(s,size,stdin);
  
   int i=0,count=0;
   while(s[i]!='\0'){
       count++;
       i++;
   }
  
   printf("\nLength = %d",count);
  
   return 0;
}

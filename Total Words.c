#include <stdio.h>
#include <string.h>

int main()
{
int count = 1;
  
char s[100];
printf("Enter the string: ");
fgets(s, 100, stdin);
  
int i=0;
while(s[i]!='\0'){
if(s[i]==' ') count++;
i++;
}
  
printf("Total words : %d\n",count);
  
return 0;
}

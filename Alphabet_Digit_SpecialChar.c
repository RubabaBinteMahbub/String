#include <stdio.h>
#include <string.h>

int main()
{
int alph=0,digit=0,speChar=0;
  
char s[100];
printf("Enter the string: ");
fgets(s, 100, stdin);
  
int i=0;
while(s[i]!='\0'){
if(s[i]==' ') i++;
if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) alph++;
else if(s[i]>='0' && s[i]<='9') digit++;
else speChar++;
i++;
}
  
printf("%d\n",alph);
printf("%d\n",digit);
printf("%d\n",speChar);

return 0;
}

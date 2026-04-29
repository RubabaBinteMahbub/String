#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];
  
    int alph = 0, digit = 0, special = 0,i;
    
    printf("Enter a string: ");
    fgets(s,100,stdin);

i=0;
while(s[i] != '\0') {
if (isalpha(s[i])) alph++;
else if (isdigit(s[i])) digit++;
else if (ispunct(s[i]) && s[i]!='.') special++;
i++;
}

printf("Alphabets = %d\n", alph);
printf("Digits = %d\n", digit);
printf("Special characters = %d\n", special);

return 0;
}

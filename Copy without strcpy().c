#include<stdio.h>
#include<string.h>

int main()
{
    int size;
  
    printf("Enter size : ");
    scanf("%d",&size);
    getchar(); 
  
    char s[size], s1[size];
  
    printf("Enter the 1st string :\n");
    fgets(s, size, stdin);
  
    printf("Enter the 2nd string :\n");
    fgets(s1, size, stdin);
  
    int i = 0;
    while(s[i] != '\0'){
        s1[i] = s[i];
        i++;
    }

    s1[i] = '\0';
  
    printf("1st string = %s\n", s);
  
    return 0;
}

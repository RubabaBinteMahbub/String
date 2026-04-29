#include <stdio.h>

int main()
{
    int size1, size2;
  
    printf("Enter size of first string: ");
    scanf("%d", &size1);
    getchar();
  
    printf("Enter size of second string: ");
    scanf("%d", &size2);
    getchar();

    char s1[size1 + size2], s2[size2];
  
    printf("Enter first string:\n");
    fgets(s1, size1, stdin);
  
    printf("Enter second string:\n");
    fgets(s2, size2, stdin);

    int i = 0, j = 0;

    // Single-pass concatenation
    while (1) {
        // Remove newline if present
        if (s1[i] == '\n') s1[i] = '\0';
        if (s2[j] == '\n') s2[j] = '\0';

        // Move to end of s1
        if (s1[i] != '\0') {
            i++;
            continue;
        }

        // Copy s2 to s1
        if (s2[j] != '\0') {
            s1[i] = s2[j];// i এর current value তে বসায়।
            i++;
            j++;
        }
        else {
            break; // both strings processed
        }
    }
    s1[i] = '\0';

    printf("\nConcatenated string: %s\n", s1);
  
    return 0;
}

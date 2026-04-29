#include <stdio.h>

int main() {
    int size;
  
    printf("Enter size: ");
    scanf("%d", &size);
    // consume leftover newline
    getchar();
  
    char s[size], s1[size];
  
    printf("Enter first string:\n");
    fgets(s, size, stdin);
  
    printf("Enter second string:\n");
    fgets(s1, size, stdin);

    int i = 0;
    int same = 1;

    while (1) {
        // Remove newline if present
        if (s[i] == '\n') s[i] = '\0';
        if (s1[i] == '\n') s1[i] = '\0';

        // Compare characters
        if (s[i] != s1[i]) {
            same = 0;
            break;
        }

        // If both strings ended, they are same
        if (s[i] == '\0' && s1[i] == '\0') {
            break;
        }

        i++;
    }

    if (same==1) {  // simpler form
        printf("\nSame.\n");
    }
    else {
        printf("\nNot same.\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);

    j = 0;
    for (i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    printf("Reversed String: %s", rev);

    return 0;
}
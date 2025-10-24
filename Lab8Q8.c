#include <stdio.h>
int main() {
    char str[100];
    printf("Enter non-alphabetic characters:\n");
    scanf("%[^A-Za-z]", str);

    printf("You entered:\n%s\n", str);
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "programming";
    char str2[] = "gaming";

    printf("Common Characters: ");

    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}
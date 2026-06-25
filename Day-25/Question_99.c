#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {
        "Ravi",
        "Ankit",
        "Priya",
        "Neha",
        "Karan"
    };

    char temp[20];

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in Alphabetical Order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
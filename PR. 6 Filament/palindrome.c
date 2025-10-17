#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter any string: ");
    scanf("%s", str); // Read input string

    // Manually calculate the length
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome manually
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is NOT a Palindrome.\n");
    }

    return 0;
}

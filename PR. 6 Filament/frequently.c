#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    int count;
    int visited[100] = {0}; // To mark characters already counted

    printf("Enter any string: ");
    scanf("%s", str); // Read string (without spaces)

    printf("Frequency of each letter:\n");

    for (i = 0; str[i] != '\0'; i++) {
        if (visited[i] == 1)
            continue;

        count = 1;
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%c => %d\n", str[i], count);
    }

    return 0;
}

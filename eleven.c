#include <stdio.h>

int main() {
    char str[100];
    int count;
    int visited[100] = {0};

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            continue;

        if (visited[i] == 1)
            continue;

        count = 1;

        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[j] == '\n')
                continue;

            if (str[i] == str[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}
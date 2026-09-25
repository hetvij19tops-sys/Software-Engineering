#include <stdio.h>
#include <string.h>

void truncateMessage(char message[], int N) {
    int length = strlen(message);

    if (length > N) {
        for (int i = 0; i < N; i++) {
            printf("%c", message[i]);
        }
        printf("...");
    } else {
        printf("%s", message);
    }
}

int main() {
    char message[] = "Hey, are you coming to the party?";
    int N = 10;

    truncateMessage(message, N);

    return 0;
}
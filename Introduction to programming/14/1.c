#include <stdio.h>
#include <string.h>

int linearSearch(char usernames[][20], int n, char target[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(usernames[i], target) == 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    char usernames[7][20] = {
        "rahul",
        "hetvi",
        "riya",
        "aman",
        "jay",
        "neha",
        "dev"
    };

    char target[20] = "jay";
    int result = linearSearch(usernames, 7, target);

    if (result != -1)
        printf("Username found at index: %d\n", result);
    else
        printf("Username not found\n");

    return 0;
}
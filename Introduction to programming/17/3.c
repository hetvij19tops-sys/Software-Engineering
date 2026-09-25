#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // false
        }

        start++;
        end--;
    }

    return 1;  // true
}

int main() {
    char word[50];

    printf("Enter a word: ");
    scanf("%s", word);

    if (isPalindrome(word)) {
        printf("True - It is a palindrome");
    } else {
        printf("False - It is not a palindrome");
    }

    return 0;
}
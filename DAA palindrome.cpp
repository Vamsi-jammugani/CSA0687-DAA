#include <stdio.h>
#include <string.h>

int isPalindromeString(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right])
            return 0; 
        left++;
        right--;
    }

    return 1;  
}

int isPalindromeNumber(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int choice;
    printf("Enter your choice (1 for string, 2 for number): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            char str[100];
            printf("Enter a string: ");
            scanf("%s", str);

            if (isPalindromeString(str))
                printf("Palindrome\n");
            else
                printf("Not a palindrome\n");
            break;

        case 2:
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);

            if (isPalindromeNumber(num))
                printf("Palindrome\n");
            else
                printf("Not a palindrome\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}


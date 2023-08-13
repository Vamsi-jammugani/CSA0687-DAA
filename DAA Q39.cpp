#include <stdio.h>
#include <string.h>

int isSubstring(char str[], char substr[]) {
    int i, j;
    int strLen = strlen(str);
    int substrLen = strlen(substr);

    for (i = 0; i <= strLen - substrLen; i++) {
        for (j = 0; j < substrLen; j++) {
            if (str[i + j] != substr[j])
                break;
        }
        if (j == substrLen)
            return 1;  
    }

    return 0;  
}

int main() {
    char str[100], substr[100];
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the substring to search for: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';

    if (isSubstring(str, substr))
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}


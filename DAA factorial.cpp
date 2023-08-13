#include <stdio.h>
int main() {
    int n, i,count=0;
    unsigned long long fact = 1;
    count++;
    printf("Enter an integer: ");
    count++;
    scanf("%d", &n);
    count++;
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else {
    	count++;
    	count++;
        for (i = 1; i <= n; ++i) {
        	count++;
        	count++;
        	count++;
            fact *= i;
            count++;
        }
        count++;
        printf("Factorial of %d = %llu\n", n, fact);
        count++;
        printf("%d\n",count);
    }
    return 0;
}

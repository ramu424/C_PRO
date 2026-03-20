#include <stdio.h>
#include <math.h> // Required for pow()

int main() {
    int n, t, temp, count = 0, rem, sum = 0;
    
    printf("Enter your number: ");
    if (scanf("%d", &n) != 1) return 1; // Basic input check

    t = n; 
    temp = n;

    // Step 1: Count the number of digits
    while (n != 0) {
        count++;
        n = n / 10;
    }

    // Step 2: Calculate sum of digits raised to the power of 'count'
    while (t != 0) {
        rem = t % 10;
        sum = sum + (int)pow(rem, count); // Cast double to int
        t = t / 10;
    }

    // Step 3: Compare sum with the original number
    if (sum == temp) {
        printf("%d is an armstrong number\n", temp);
    } else {
        printf("%d is a non armstrong number\n", temp);
    }

    return 0;
}

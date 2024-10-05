#include <stdio.h>

int main() {
    int A;                // To store the integer A
    long long B;          // To store the very large integer B
    float C;              // To store the floating-point value C
    char D;               // To store the character D

    // Take input for A, B, C, and D
    scanf("%d", &A);        // Read integer A
    scanf("%lld", &B);      // Read very large integer B (long long type for big numbers)
    scanf("%f", &C);        // Read floating-point number C
    scanf(" %c", &D);       // Read character D (with a space before %c to handle newline)

    // Print A, B, C (with 2 decimal places), and D, each on a new line
    printf("%d\n", A);         // Print integer A
    printf("%lld\n", B);       // Print large integer B
    printf("%.2f\n", C);       // Print floating-point C with 2 decimal points
    printf("%c\n", D);         // Print character D

    return 0;                  // End of the program
}

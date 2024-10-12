#include <stdio.h>

int main() {
    int N;  // Declare an integer to store the input value N
    
    // Take input for N
    scanf("%d", &N);  // Read the integer N from the user
    
    
    // Loop through numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        // Check if the current number is divisible by 5
        if (i % 5 == 0) {
            printf("%d Yes\n", i);  // Print the number and "Yes" if divisible by 5
        } else {
            printf("%d No\n", i);   // Print the number and "No" otherwise
        }
    }
    
    return 0;  // End of the program
}

// #include <stdio.h>
// int main(){
//     printf("hello world");

//     return 0;
// }

// Question-2

// #include <stdio.h>

// int main() {
//     int A, B;              
    
//     scanf("%d %d", &A, &B); 
    
//     printf("%d\n", A + B);  
    
//     return 0;               
// }

// Question-3 Problem Statement

// You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.
// Input Format

// First line will contain A
// Second line will contain B
// Third line will contain C
// Fourth line will contain D
// Constraints

// -10^9 <= A <= 10^9
// -10^18 <= B <= 10^18
// -10^9 <= C <= 10^9
// Output Format

// Output them serially and put a new line after each value. Output the floating value 2 points after decimal.

#include <stdio.h>

int main() {
    int A;               // Integer variable for A
    long long int B;      // Long long integer variable for very large integer B
    float C;             // Floating-point variable for C
    char D;              // Character variable for D
    
    // Reading input values
    scanf("%d", &A);              // Inpt for integer A
    scanf("%lld", &B);            // Inpt for long long integer B
    scanf("%f", &C);              // Inpt for floating-point number C
    scanf(" %c", &D);             // Inpt for character D (notice the space before %c to ignore any newline)
    
    // Printing output
    printf("%d\n", A);            // Otpt integer A
    printf("%lld\n", B);          // Otpt long long integer B
    printf("%.2f\n", C);          // Output floating-point number C with 2 decimal points
    printf("%c\n", D);            // Output character D
    
    return 0;
}


#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;  
    
    // Loop through numbers from 1 to n and multiply them to calculate factorial
    for (int i = 1; i <= n; i++) {
        result *= i;  // Multiply the current result by i
    }
    return result;  // Return the calculated factorial
}

int main() {
    int num;
    
    // Prompt the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the user's input number

    // Print result
    printf("Factorial of %d is: %d\n", num, factorial(num));

    return 0;  // Indicate that the program has finished successfully
}

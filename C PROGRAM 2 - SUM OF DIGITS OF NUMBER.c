#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;  // Initialize sum to 0
    // Loop to extract and sum digits of the number
    while (num > 0) {
        sum += num % 10; 
        num /= 10; 
    }
    return sum;  // Return the total sum of digits
}

int main() {
    int num;
    
    // Prompt the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the user's input number

    // Calculate the sum
    int result = sum_of_digits(num);
    
    // Print result
    printf("Sum of digits of %d is %d\n", num, result);

    return 0;  // Indicate that the program has finished successfully
}

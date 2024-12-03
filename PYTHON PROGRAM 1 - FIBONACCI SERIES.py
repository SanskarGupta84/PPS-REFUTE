# Creating user defined function
def fibonacci(n):
    sequence = [0, 1]
    while len(sequence) < n:
        next_term = sequence[-1] + sequence[-2]
        sequence.append(next_term)
    return sequence

# Taking input from the user
n = int(input("Enter the number of terms in the Fibonacci sequence: "))

# Call the function and display the result
print(f"The first {n} terms of the Fibonacci sequence are: {fibonacci(n)}")

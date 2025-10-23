#define CATCH_CONFIG_MAIN

// Function to calculate factorial using multiple threads
long calculateFactorial(int n) {
    long result = 1;
    
    //Implement the function to calculate factorial of n
    if (n < 0) {
        throw std::invalid_argument("The factorial for negative numbers is not defined");
    }

    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

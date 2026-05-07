#include <stdio.h>

int main() {
    long long X, Y; // Use long long to handle potential intermediate results up to 10^5 * 10^5 = 10^10, although int would suffice for the given constraints (10^5).
    
    // Read the two input numbers
    scanf("%lld %lld", &X, &Y);
    
    // Perform and print the summation
    printf("%lld + %lld = %lld\n", X, Y, X + Y);
    
    // Perform and print the multiplication
    printf("%lld * %lld = %lld\n", X, Y, X * Y);
    
    // Perform and print the subtraction
    printf("%lld - %lld = %lld\n", X, Y, X - Y);
    
    return 0;
}
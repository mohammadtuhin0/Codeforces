#include <stdio.h> // Required for scanf and printf

int main() {
    int intValue;
    long long longLongValue;
    char charValue;
    float floatValue;
    double doubleValue;
    
    // Read the five space-separated values
    // Note the space before %c to consume any leftover whitespace (like newline from previous input)
    scanf("%d %lld %c %f %lf", &intValue, &longLongValue, &charValue, &floatValue, &doubleValue);
    
    // Print each value on a new line
    printf("%d\n", intValue);
    printf("%lld\n", longLongValue);
    printf("%c\n", charValue);
    printf("%f\n", floatValue);
    printf("%lf\n", doubleValue);
    
    return 0;
}
#include <stdio.h> // for scanf() and printf()

// Function prototypes
int area(int l, int w); // Changed parameter name `1` to `l` (variable names can't start with a digit)
int perimeter(int length, int width);

int main() {
    int a, c, len, wid;

    // Prompt user for input
    printf("Enter length and width: ");
    scanf("%d%d", &len, &wid);

    // Calculate area and perimeter
    a = area(len, wid);
    c = perimeter(len, wid);

    // Display results
    printf("Area is %d \n", a);
    printf("Perimeter is %d \n", c);

    return 0;
}

// Function definitions
int area(int l, int w) { // Corrected parameter name `1` to `l`
    int a;
    a = l * w; // Corrected `1*w` to `l*w`
    return a;
}

int perimeter(int length, int width) {
    // Function implementation is missing; you need to define how to calculate the perimeter
    return 2 * (length + width); // Example implementation
}

#include <stdio.h>

/* Function declarations */
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float x = 10, y = 5;

    printf("Add: %.2f\n", add(x, y));
    printf("Subtract: %.2f\n", subtract(x, y));
    printf("Multiply: %.2f\n", multiply(x, y));
    printf("Divide: %.2f\n", divide(x, y));

    return 0;
}

/* Function definitions */
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else
        return 0; // simple error handling
}

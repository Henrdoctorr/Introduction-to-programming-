#include <stdio.h>

int main() {
    float salary, tax;

    // Input yearly salary
    printf("Enter the yearly salary of the employee: ");
    scanf("%f", &salary);

    // Calculate tax based on conditions
    if (salary <= 400000) {
        tax = salary * 0.01;
    } else if (salary > 400000 && salary <= 1000000) {
        tax = (400000 * 0.01) + ((salary - 400000) * 0.15);
    } else {
        tax = (400000 * 0.01) + (600000 * 0.15) + ((salary - 1000000) * 0.25);
    }

    // Display tax amount
    printf("Tax amount: %.2f\n", tax);

    return 0;
}

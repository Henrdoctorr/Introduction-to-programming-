#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitConsumed, chargesPerUnit, totalAmount, surcharge, totalBill;

    // Prompt user to enter customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%f", &unitConsumed);

    // Calculate charges per unit based on units consumed
    if (unitConsumed <= 300) {
        chargesPerUnit = 175;
    } else if (unitConsumed > 300 && unitConsumed < 600) {
        chargesPerUnit = 200;
    } else if (unitConsumed >= 600 && unitConsumed < 800) {
        chargesPerUnit = 300;
    } else {
        chargesPerUnit = 400;
    }

    // Calculate total amount without surcharge
    totalAmount = unitConsumed * chargesPerUnit;

    // Apply surcharge if total bill exceeds Kshs. 500
    if (totalAmount > 500) {
        surcharge = 0.2 * totalAmount;
    } else {
        surcharge = 0;
    }

    // Calculate total bill including surcharge
    totalBill = totalAmount + surcharge;

    // Ensure minimum bill of Kshs. 200
    if (totalBill < 200) {
        totalBill = 200;
    }

    // Display customer details and total amount to pay
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitConsumed);
    printf("Charges per Unit: Kshs. %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: Kshs. %.2f\n", totalBill);

    return 0;
}

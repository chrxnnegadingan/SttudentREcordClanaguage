
#include <stdio.h>

int main() {

    char guestName[] = "Maria Santos";
    int roomNumber = 205;
    int numberOfNights = 4;
    float roomRate = 1800.00;
    float serviceFee = 350.00;
    float discountRate = 0.15;
    int guests = 2;

    // ERROR 1: Missing semicolon.
    float roomTotal = roomRate * numberOfNights

    // ERROR 2: The variable discountAmount is undeclared.
    discountAmount = roomTotal * discountRate;

    // ERROR 3: The variable finalBill is undeclared.
    finalBill = roomTotal + serviceFee - discountAmount;

    // ERROR 4: Invalid comparison operator.
    if (numberOfNights => 3) {
        printf("Long-stay discount may apply.\n");
    }

    // ERROR 5: The variable parkingFee is undeclared.
    float totalPayment = finalBill + parkingFee;

    // ERROR 6: Incorrect format specifier.
    // %d is for integers; roomRate is a floating-point value.
    printf("Room Rate: %d\n", roomRate);

    // ERROR 7: The variable checkOutDate is undeclared.
    printf("Checkout Date: %s\n", checkOutDate);

    // ERROR 8: Missing semicolon at the end.
    printf("Guest Name: %s\n", guestName)

    printf("Room Number: %d\n", roomNumber);
    printf("Number of Nights: %d\n", numberOfNights);
    printf("Number of Guests: %d\n", guests);
    printf("Room Total: %.2f\n", roomTotal);
    printf("Service Fee: %.2f\n", serviceFee);
    printf("Discount: %.2f\n", discountAmount);
    printf("Final Bill: %.2f\n", finalBill);
    printf("Total Payment: %.2f\n", totalPayment);

    return 0;
}

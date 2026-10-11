
#include <stdio.h>

int main(void) {

    char guestName[] = "Maria Santos";
    int roomNumber = 205;
    int numberOfNights = 4;
    float roomRate = 1800.00f;
    float serviceFee = 350.00f;
    float discountRate = 0.15f;
    float parkingFee = 200.00f;

    float roomTotal = roomRate * numberOfNights;
    float discountAmount = roomTotal * discountRate;

    float finalBill = roomTotal
                    + serviceFee
                    - discountAmount;

    float totalPayment = finalBill + parkingFee;

    if (numberOfNights >= 3) {
        printf("Long-stay discount eligibility confirmed.\n");
    }

    printf("\n--- HOTEL BILLING RECEIPT ---\n");
    printf("Guest Name: %s\n", guestName);
    printf("Room Number: %d\n", roomNumber);
    printf("Number of Nights: %d\n", numberOfNights);
    printf("Room Rate: %.2f\n", roomRate);
    printf("Room Total: %.2f\n", roomTotal);
    printf("Service Fee: %.2f\n", serviceFee);
    printf("Discount: %.2f\n", discountAmount);
    printf("Parking Fee: %.2f\n", parkingFee);
    printf("Final Bill: %.2f\n", finalBill);
    printf("Total Payment: %.2f\n", totalPayment);

    return 0;
}

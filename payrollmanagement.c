
#include <stdio.h>

int main() {

    char employeeName[] = "Pedro Reyes";
    float dailyRate = 650.50;
    int daysWorked = 22;
    float taxRate = 0.10;

    // ERROR 1: Missing semicolon.
    float grossSalary = dailyRate * daysWorked

    // ERROR 2: taxAmount is undeclared.
    taxAmount = grossSalary * taxRate;

    // ERROR 3: netSalary is not declared before use.
    netSalary = grossSalary - taxAmount;

    // ERROR 4: overtimePay has not been declared.
    float totalSalary = netSalary + overtimePay;

    // ERROR 5: Incorrect format specifier.
    // %d is for integers, not floating-point values.
    printf("Gross Salary: %d\n", grossSalary);

    // ERROR 6: The variable employeeID is undeclared.
    printf("Employee ID: %d\n", employeeID);

    printf("Employee: %s\n", employeeName);
    printf("Daily Rate: %.2f\n", dailyRate);
    printf("Days Worked: %d\n", daysWorked);
    printf("Net Salary: %.2f\n", netSalary);
    printf("Total Salary: %.2f\n", totalSalary);

    return 0;
}

#include <stdio.h>


int main() {
    double principal, rate, amount;
    int years, compounds;

    // User input
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter number of years: ");
    scanf("%d", &years);
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &compounds);

    // Convert rate from percentage to decimal
    rate = rate / 100;

    // Calculate compound interest
    amount = principal * pow((1 + rate / compounds), compounds * years);

    // Output the result
    printf("Total amount after %.2f years: %.2f\n", (double)years, amount);
    printf("Compound interest earned: %.2f\n", amount - principal);

    return 0;
}

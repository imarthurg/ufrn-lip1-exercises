#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int PRODUCT_CODE_1, PRODUCT_COUNT_1, PRODUCT_CODE_2, PRODUCT_COUNT_2;
    double PRODUCT_PRICE_1, PRODUCT_PRICE_2;

    cin >> PRODUCT_CODE_1 >> PRODUCT_COUNT_1 >> PRODUCT_PRICE_1;
    cin >> PRODUCT_CODE_2 >> PRODUCT_COUNT_2 >> PRODUCT_PRICE_2;

    double AMOUNT_TO_BE_PAID;

    AMOUNT_TO_BE_PAID = PRODUCT_COUNT_1 * PRODUCT_PRICE_1 + PRODUCT_COUNT_2 * PRODUCT_PRICE_2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << AMOUNT_TO_BE_PAID << endl;

    return 0;
}
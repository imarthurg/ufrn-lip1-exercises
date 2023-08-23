#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string SELLER_NAME;
    double SELLER_BASE_SALARY, SELLER_SALES_AMOUNT;

    cin >> SELLER_NAME;
    cin >> SELLER_BASE_SALARY;
    cin >> SELLER_SALES_AMOUNT;

    double SELLER_TOTAL_SALARY;

    SELLER_TOTAL_SALARY = SELLER_BASE_SALARY + SELLER_SALES_AMOUNT * 0.15;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << SELLER_TOTAL_SALARY << endl;

    return 0;
}
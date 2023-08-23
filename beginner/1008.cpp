#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int EMPLOYEE_NUMBER, EMPLOYEE_WORKED_HOURS;
    double EMPLOYEE_HOUR_PRICE;

    cin >> EMPLOYEE_NUMBER;
    cin >> EMPLOYEE_WORKED_HOURS;
    cin >> EMPLOYEE_HOUR_PRICE;

    cout << "NUMBER = " << EMPLOYEE_NUMBER << endl;

    double EMPLOYEE_SALARY;

    EMPLOYEE_SALARY = EMPLOYEE_WORKED_HOURS * EMPLOYEE_HOUR_PRICE;

    cout << "SALARY = U$ " << fixed << setprecision(2) << EMPLOYEE_SALARY << endl;

    return 0;
}
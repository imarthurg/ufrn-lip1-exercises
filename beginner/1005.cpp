#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double GRADE_1, GRADE_2, AVG;

    cin >> GRADE_1;
    cin >> GRADE_2;

    AVG = (GRADE_1 * 3.5 + GRADE_2 * 7.5) / 11.0;

    cout << "MEDIA = " << fixed << setprecision(5) << AVG << endl;

    return 0;
}
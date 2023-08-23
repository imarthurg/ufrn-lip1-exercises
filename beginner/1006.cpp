#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double GRADE_1, GRADE_2, GRADE_3, AVG;

    cin >> GRADE_1;
    cin >> GRADE_2;
    cin >> GRADE_3;

    AVG = (GRADE_1 * 2 + GRADE_2 * 3 + GRADE_3 * 5) / 10.0;

    cout << "MEDIA = " << fixed << setprecision(1) << AVG << endl;

    return 0;
}
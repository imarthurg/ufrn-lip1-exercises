#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int A, B, C, D, DIFF;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    DIFF = A * B - C * D;

    cout << "DIFERENCA = " << DIFF << endl;

    return 0;
}
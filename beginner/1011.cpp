#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double pi = 3.14159;
    double R;

    cin >> R;

    double SPHERE_VOLUME;

    SPHERE_VOLUME = 4.0 / 3.0 * pi * pow(R, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << SPHERE_VOLUME << endl;

    return 0;
}
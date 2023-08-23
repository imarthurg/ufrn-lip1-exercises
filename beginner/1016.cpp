#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int CAR_X_SPEED_KM_HOUR = 60;
    int CAR_Y_SPEED_KM_HOUR = 90;

    int Y_DISTANCE_FROM_X;

    cin >> Y_DISTANCE_FROM_X;

    double MINUTES_TO_REACH_DISTANCE;

    // Manipulate deltaSy - deltaSx = Y_DISTANCE_FROM_X;
    MINUTES_TO_REACH_DISTANCE = 60 * Y_DISTANCE_FROM_X / (CAR_Y_SPEED_KM_HOUR - CAR_X_SPEED_KM_HOUR);

    cout << MINUTES_TO_REACH_DISTANCE << " minutos" << endl;

    return 0;
}
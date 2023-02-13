#include <iostream>
#include "constants.h"

using namespace std;

auto const GroundLevel = 0.0;

auto calculateHeight(auto initialHeight, auto seconds)
{
    double distanceFallen { myConstants::gravity * seconds * seconds / 2 };
    double heightNow { initialHeight - distanceFallen };

    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow <= GroundLevel)
        return GroundLevel;
    else
        return heightNow;
}

auto calculateAndPrintHeight(auto height, auto time)
{
    cout << "At " << time << " seconds, the ball is at height: " << height << "\n";
}

int main()
{
    cout << "Enter the initial height of the tower in meters: ";
    double initialHeight {};
    cin >> initialHeight;

    int time{};
    while (true) {
        auto height = calculateHeight(initialHeight, time);
        calculateAndPrintHeight(height, time);
        if (height == GroundLevel) break;
        time++;
    }

    return 0;
}

#include <iostream>

using namespace std;

auto getTowerHeight() {
    cout << "Enter the height of tower (in meters): ";
    double d;
    cin >> d;
    return d;
}

int main()
{
    const auto g {9.8};
    const auto towerHeight {getTowerHeight()};
    cout << "Assuming acceleration due to gravity is " << g << "m/s^2;\n";
    for (auto time = 0; time <= 5; time++) {
        auto height = towerHeight - g * time * time * (1.0/2);
        if (height <= 0) {
            cout << "At time instant " << time <<  ", the ball is on the ground!\n";
            break;
        }
        cout << "At time instant " << time << ", the height of the ball is " <<
                height << "m.\n";
    }
    return 0;
}

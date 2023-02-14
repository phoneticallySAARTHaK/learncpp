#include <iostream>

namespace constants
{
    inline constexpr double pi { 3.14159 };
}

using constants::pi;
using std::cout;
using std::cin;
using Radian = double;
using Degree = double;

Radian convertToRadians(Degree degrees)
{
    return degrees * pi / 180;
}

int main()
{
    cout << "Enter a number of degrees: ";
    Degree degrees{};
    cin >> degrees;

    Radian radians { convertToRadians(degrees) };
    cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}

#include <iostream>
#include <limits>
using namespace std;

auto getNumber(auto min, auto max) {
    decltype(min) n{};
    while(true) {
        cout << "Enter a number between " << min << " and " << max << ": ";
        cin >> n;

        if (n >= min && n <= max) {
            return n;
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.clear();
        }
    }
}

int main()
{
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    auto number{getNumber(1, 9)};
    size_t i{};

    for (auto num : array) {
        if (num == number) {
            cout << i;
            break;
        }
        ++i;
    }

    if (i == size(array)) {
        cout << "Number not found in the array";
    }

    return 0;
}

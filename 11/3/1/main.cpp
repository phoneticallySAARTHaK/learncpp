#include <iostream>

using namespace std;

int main()
{
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    for (const auto el : array) {
        cout << el << " ";
    }
    return 0;
}

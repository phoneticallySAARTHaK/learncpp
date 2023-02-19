#include <iostream>
#include <utility>

using namespace std;

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    for ([[maybe_unused]] const auto el : array) {
        for (int inner{}; inner < ssize(array) - 1; ++inner) {
            if (array[inner + 1] < array[inner]) {
                swap(array[inner], array[inner + 1]);
            }
        }
    }

    for (const auto el : array) {
        cout << el << " ";
    }
}

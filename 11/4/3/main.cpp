#include <iostream>
#include <utility>

using namespace std;

int main()
{
    int array[]{ 6, 3, 2, 1, 5, 4, 8, 7, 9 };

    for (int outer{1}; outer < ssize(array); ++outer){
        bool swapped{false};
        for (int inner{}; inner < ssize(array) - outer; ++inner) {
            if (array[inner + 1] < array[inner]) {
                swapped = true;
                swap(array[inner], array[inner + 1]);
            }
        }
        if (!swapped) {
            // already sorted;
            break;
        }
    }

    for (const auto el : array) {
        cout << el << " ";
    }
}

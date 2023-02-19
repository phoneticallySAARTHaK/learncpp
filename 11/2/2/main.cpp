#include <iostream>

using namespace std;

namespace Animals {
enum Animal {
    chicken, dog, cat, elephant, duck, snake
};
}

int main()
{
    [[maybe_unused]] int arr[] {4, 4, 4, 4, 2, 0};
    cout << "An lephant has " << arr[Animals::elephant] << " legs.";
    return 0;
}

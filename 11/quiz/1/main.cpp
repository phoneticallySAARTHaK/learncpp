#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

namespace items_n {
enum items_e {
    health_potions, torches, arrows,
};
}

auto countTotalItems(const auto& items) {
    return accumulate(begin(items), end(items), 0);
}

int main()
{
    array items {2, 5, 10};
    cout << "You have " << items[items_n::torches] << " torches, and " << countTotalItems(items) << " items in total.\n";
    return 0;
}

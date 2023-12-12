#include <iostream>
#include <string>
#include <utility>
#include <array>
#include <algorithm>
#include <ranges>

using namespace std;

struct Student {
    string name;
    int pt;
};

int main()
{
    std::array<Student, 8> arr{
      { { "Albert", 3 },
        { "Ben", 5 },
        { "Christine", 2 },
        { "Dan", 8 }, // Dan has the most points (8).
        { "Enchilada", 4 },
        { "Francis", 1 },
        { "Greg", 3 },
        { "Hagrid", 5 } }
    };

    cout << max_element(begin(arr), end(arr),
                        [](const auto& a, const auto& b){ return a.pt < b.pt; }
                        )->name
         << " is the best student.\n";
    return 0;
}

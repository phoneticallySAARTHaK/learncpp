#include <iostream>

using namespace std;

int main()
{
    const auto limit{5};
    auto rowCount{0};

    while(rowCount < limit) {
        auto colCount{0};
        while (colCount < limit - rowCount) {
            cout << limit - rowCount - colCount << ' ';
            colCount++;
        }
        cout << '\n';
        rowCount++;
    }
    return 0;
}

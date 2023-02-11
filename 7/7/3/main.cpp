#include <iostream>

using namespace std;

int main()
{
    const auto limit{5};
    auto rowCount{0};

    while(rowCount < limit) {
        auto colCount{0};
        while (colCount < limit) {
            if (colCount < limit - (rowCount + 1)) {
                cout << ' ';
            }
            else {
                cout << limit - colCount;
            }
            cout << ' ';
            colCount++;
        }
        cout << '\n';
        rowCount++;
    }
    return 0;
}

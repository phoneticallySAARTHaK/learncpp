#include <iostream>

using namespace std;

auto printCStyleString(const char* str) {
    size_t i{};
    while(str[i]) {
        cout << str[i++];
    }
}

int main()
{
    printCStyleString("abcd");
    return 0;
}

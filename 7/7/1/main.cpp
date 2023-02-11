#include <iostream>

using namespace std;

auto printAtoZ(){
    auto letter = 'a';
    while(letter <= 'z') {
        cout << letter << ' ' << static_cast<int>(letter) << '\n';
        letter++;
    }
}

int main()
{
    printAtoZ();
    return 0;
}

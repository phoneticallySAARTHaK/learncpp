#include <iostream>
#include <tuple>

using namespace std;

auto getNumber(const char * message){
    cout << message;
    int n{};
    cin >> n;
    return n;
}

auto larger{getNumber("Enter a larger number: ")};
auto smaller{getNumber("Enter a smaller number: ")};

int main()
{

    if (smaller > larger) {
        cout << "Swapping the numbers\n";
        const auto [larger, smaller] = tuple{::smaller, ::larger};
        cout << "Smaller number is: " << smaller << endl;
        cout << "Larger number is: " << larger << endl;

    }

    return 0;
}

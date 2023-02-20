#include <iostream>
#include <string>
#include <limits>
#include <algorithm>

using namespace std;

auto getNameCount() {
    while (true) {
        cout << "How many names do you want to enter? ";

        int n{};
        cin >> n;

        if (!cin) {
            cerr << "Enter a valid number\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max());
        }
        else {
            return n;
        }
    }
}

void getNames(string* names, size_t size) {

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (size_t i{}; i < size; i++) {
        cout << "Enter name #" << (i + 1) << ": ";
        getline(cin, names[i]);
    }
}

void printSortedNames(string* names, size_t size) {

    sort(names, names + size);

    cout << "Here's a sorted list of names:\n";
    for (size_t i{}; i < size; i++) {
        cout << "Name #" << (i + 1) << ": " << names[i] << " ";
    }
}

int main()
{
    auto total{getNameCount()};
    auto names{new string[total]};

    getNames(names, total);

    printSortedNames(names, total);

    delete[] names;
    return 0;
}

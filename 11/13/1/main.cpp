#include <iostream>
#include <string_view>

using namespace std;

auto getName() {
    cout << "Enter a name: ";
    string str;
    getline(cin, str);
    return str;
}

auto findName(const string_view* names, size_t size, string_view name) {
    for (size_t i {}; i < size; i++) {
        if (names[i] == name) {
            return true;
        }
    }

    return false;
}

int main()
{
    constexpr string_view names[]{
        "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"
    };

    auto name{getName()};

    cout << name << " was " << (findName(names, size(names), name) ? "" : "not") << " found." << endl;

}

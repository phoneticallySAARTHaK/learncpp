#include <iostream>
#include <string_view>
#include <limits>

using namespace std;

#define convert(T) static_cast<int>(T);

enum class Animal {
    pig, chicken, goat, cat, dog, duck
};

string_view getAnimalName(Animal e) {
    using enum Animal;
    switch(e) {
    case pig: return "pig";
    case cat: return "cat";
    case chicken: return "chicken";
    case dog: return "dog";
    case duck: return "duck";
    case goat: return "goat";
    default:
        return "error";
        cerr << "Not an animal";
    }
}

auto getNumberOfLegs(Animal e) {
    using enum Animal;
    switch(e) {
    case pig:
    case cat:
    case dog:
    case goat:
        return 4;
    case duck:
    case chicken: return 2;
    default:
        return numeric_limits<int>::max();
        cerr << "Not an animal";
    }
}

int main()
{
    constexpr Animal e{2};
     cout << "A " << getAnimalName(e) << " has " << getNumberOfLegs(e) << " legs.\n";
}

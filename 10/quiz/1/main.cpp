#include <iostream>
#include <string_view>

using namespace std;
using sv = string_view;

enum class MonsterType {
    ogre, dragon, orc, giantSpider, slime,
};

struct Monster {
    MonsterType type;
    sv name{};
    int hp{};
};

ostream& operator<<(ostream& os, const MonsterType& t) {
    using enum MonsterType;
    switch(t) {
    case ogre:
        return os << "ogre";
    case dragon:
        return os << "dragon";
    case giantSpider:
        return os << "giant spider";
    case orc:
        return os << "orc";
    case slime:
        return os << "slime";
    }
}

ostream& operator<<(ostream& os, const Monster& m) {
    return os << "This " << m.type
              << " is named " << m.name
              << " and has " << m.hp << " health.\n";
}

int main()
{
    Monster slime{ .type = MonsterType::slime,  .name = "Blurp", .hp = 23 };
    cout << slime; return 0;
}

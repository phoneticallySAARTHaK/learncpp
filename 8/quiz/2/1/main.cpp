#include <iostream>

using namespace std;

namespace Monster{
enum MonsterType {
    orcs, goblins, trolls, ogres, skeletons,
};
}

int main()
{
    [[maybe_unused]] Monster::MonsterType monster = Monster::trolls;
    return 0;
}

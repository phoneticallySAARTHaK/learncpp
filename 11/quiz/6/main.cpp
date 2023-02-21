#include <iostream>
#include "card.h"

using namespace std;

int main()
{
    auto deck {createDeck()};
    shuffleDeck(deck);
    printDeck(deck);
    return 0;
}

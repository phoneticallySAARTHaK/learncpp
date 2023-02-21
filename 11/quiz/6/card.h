#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <random>

using namespace std;



enum Rank {
    rank_2,
    rank_3,
    rank_4,
    rank_5,
    rank_6,
    rank_7,
    rank_8,
    rank_9,
    rank_10,
    rank_J,
    rank_Q,
    rank_K,
    rank_A,

    max_ranks
};

enum Suit {
    club,
    diamond,
    heart,
    spade,

    max_suits
};

struct Card {
    Rank rank{};
    Suit suit{};

    auto getCode() const {
        string code(2, '\0');
        switch(this->rank) {
        case rank_2:
            code[0] = '2';
            break;
        case rank_3:
            code[0] = '3';
            break;
        case rank_4:
            code[0] = '4';
            break;
        case rank_5:
            code[0] = '5';
            break;
        case rank_6:
            code[0] = '6';
            break;
        case rank_7:
            code[0] = '7';
            break;
        case rank_8:
            code[0] = '8';
            break;
        case rank_9:
            code[0] = '9';
            break;
        case rank_10:
            code[0] = 'T';
            break;
        case rank_J:
            code[0] = 'J';
            break;
        case rank_Q:
            code[0] = 'Q';
            break;
        case rank_K:
            code[0] = 'K';
            break;
        case rank_A:
            code[0] = 'A';
            break;
        }

        switch (this->suit) {
        case club:
            code[1] = 'C';
            break;
        case diamond:
            code[1] = 'D';
            break;
        case heart:
            code[1] = 'H';
            break;
        case spade:
            code[1] = 'S';
            break;
        }

        return code;
    }

    int getValue() const {
        switch(this->rank) {
        case rank_2:
            return 2;
        case rank_3:
            return 3;
        case rank_4:
            return 4;
        case rank_5:
            return 5;
        case rank_6:
            return 6;
        case rank_7:
            return 7;
        case rank_8:
            return 8;
        case rank_9:
            return 9;
        case rank_10:
        case rank_J:
        case rank_Q:
        case rank_K:
            return 10;
        case rank_A:
            return 11;
        default:
            return -1;
        }

    }
};

auto printCard(const Card card) {
    cout << card.getCode();
}

using Deck = array<Card, 52>;

auto createDeck() {
    Deck deck;
    for (int suit{}; suit < max_suits; suit++) {
        for (int rank{}; rank < max_ranks; rank++) {
            auto i = rank + suit * max_ranks;
            deck[i].rank = static_cast<Rank>(rank);
            deck[i].suit = static_cast<Suit>(suit);
        }
    }
    return deck;
}

auto printDeck(const Deck& deck) {
    ranges::for_each(deck, [](const auto d){ printCard(d); cout << " "; });
}

auto shuffleDeck(Deck& deck) {
    seed_seq seq{random_device{}()};
    static mt19937 mt{seq};
    mt.discard(1000);
    ranges::shuffle(deck, mt);
    return deck;
}

#endif // CARD_H

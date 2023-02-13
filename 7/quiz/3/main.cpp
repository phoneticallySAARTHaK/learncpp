#include <iostream>
#include <random>
#include <limits>

using namespace std;


namespace constants {

const int min = 1;
const int max = 100;
const int maxTrials = 7;

}

auto initialize() {
    static mt19937 mt{};
    seed_seq s1{random_device{}()};
    mt.seed(s1);
    mt.discard(100);

    return uniform_int_distribution{constants::min, constants::max}(mt);
}

auto takeGuess(auto trials) {
    cout << "Guess #" << trials + 1 << ": ";
    int n{};
    cin >> n;
    return n;
}

auto isCorrect(auto rand, auto guess) {

    if (rand == guess) {
        cout << "Correct! You win.\n";
        return true;
    }

    if (guess > rand)
        cout << "Your guess is too high.\n";
    else
        cout << "Your guess is too low.\n";

    return false;
}

auto play(auto randomNumber) {

    for (auto trials{0}; trials < constants::maxTrials; trials++) {
        if (isCorrect(randomNumber, takeGuess(trials))) {
            return;
        }
    }

    // ran out of trials
    cout << "Sorry, you ran out of guesses. The correct number was " << randomNumber << ".\n";
}

auto clearCin() {
    if (!cin) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

auto restart() {
    string inp{};

    while (true) {
        clearCin();
        cout << "Would you like to play again (y/n)? ";

        cin >> inp;

        if (inp.size() > 1) continue;

        const auto ch = tolower(inp[0]);

        if (ch == 'y')
            return true;
        else if (ch == 'n')
            return false;
        else
            continue;
    }
}

int main()
{
    cout << "Let's play a game."
            "I'm thinking of a number between " << constants::min << " and " << constants::max << ".\n"
            "You have " << constants::maxTrials << " tries to guess what it is.\n\n";

    while (true) {
        play(initialize());

        if (!restart()) {
             cout << "Thank you for playing!\n" << endl;
             break;
        }

        cout << endl;
    }

}

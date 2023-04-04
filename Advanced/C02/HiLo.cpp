//: C02:HiLo.cpp {RunByHand}
// Plays the game of Hi-Lo to illustrate a loop invariant
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Thinking of a number between 1 and 100" << endl;
    cout << "I will make a guess: "
        << "tell me if I'm (H)igh or (L)ow" << endl;
    int low = 1, high = 100;
    bool guessed = false;
    while (!guessed)
    {
        // Invariant: the number is the range [low, high]
        if (low > high)
        { // Invariant violation
            cout << "You cheated! I quit" << endl;
            return EXIT_FAILURE;
        }
        int guess = (low + high) / 2;
        cout << "My guess is " << guess << ". ";
        cout << "(H)igh, (L)ow. or (E)qual? ";
        string response;
        cin >> response;
        switch (toupper(response[0]))
        {
            case 'H':
                high = guess - 1;
                break;
            case 'L':
                low = guess + 1;
                break;
            case 'E':
                guessed = true;
                break;
            default:
                cout << "Invalid response" << endl;
                continue;
        }
    }
    cout << "I got it!" << endl;
    return EXIT_SUCCESS;
} ///:~

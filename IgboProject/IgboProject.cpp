#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random number generator
    int numToGuess = rand() % 100 + 1; // generate random number between 1 and 100
    int guess;
    int numTries = 0;
    bool guessedCorrectly = false;
    cout << "Igba nke a, biko tinye aka ikpo aka n'ime 1 ruo n'ime 100: ";
    cin >> guess;
    while (!guessedCorrectly && numTries < 5) {
        numTries++;
        if (guess == numToGuess) {
            guessedCorrectly = true;
            cout << "O bu la! O bu la! O bu la! E kwere " << numTries << " ikowaputa.";
        }
        else if (guess < numToGuess) {
            cout << "E di mma. Nke a bu maka n'igwo ka i bu " << guess << " bu nchikwa obi " << numTries << " n'ebe a.\nBiko tinye aka ikpo aka ozi nke oma:";
            cin >> guess;
        }
        else {
            cout << "E di mma. Nke a bu maka n'igwo ka i bu " << guess << " buchikwa obi " << numTries << " n'ebe a.\nBiko tinye aka ikpo aka ozi nke oma:";
            cin >> guess;
        }
    }
    if (!guessedCorrectly) {
        cout << "Ezigbo no! Nke a bu maka ikowaputa " << numTries << ". E wepuru m ka i na-akwado ngalaba.\n";
    }
    return 0;
}
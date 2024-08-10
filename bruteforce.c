#include "bruteforce.h"

// Sample wordlist for brute-force password guessing
const char* wordlist[WORDLIST_COUNT] = {
    "password",
    "123456",
    "letmein",
    "welcome",
    "abc123" // included to match the correct password in the example
};

// Function to generate and print guesses from the defined wordlist
void getGuess(char* guess) {
    // Iterate through the wordlist to pick the current guess
    static int index = 0; // static variable to keep track of the current word
    if (index < WORDLIST_COUNT) {
        strcpy(guess, wordlist[index]); // Copy the current word into the guess
        index++; // Move to the next word for the next call
    }
    else {
        strcpy(guess, ""); // No more words left
    }
}
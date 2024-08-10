#define _CRT_SECURE_NO_WARNINGS
#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

#define MAX_SIZE 30         // Maximum length of a password
#define WORDLIST_COUNT 5    // Number of words in the internal wordlist

void getGuess(char* guess);  // Function to generate password guesses

#endif // BRUTEFORCE_H
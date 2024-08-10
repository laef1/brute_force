#include "bruteforce.h"

int main(int argc, char* argv[]) {
    char correctPassword[] = "abc123"; // The correct password
    char inputPassword[100];

    while (1) {
        // Commenting the prompt since we are simulating an automated input
        printf("Enter password: ");

        getGuess(inputPassword);

        // Display the guess
        printf("Trying: %s\n", inputPassword);

        // Check if the generated guess matches the correct password
        if (strcmp(inputPassword, correctPassword) == 0) {
            printf("Password is correct: %s\n", inputPassword);
            Sleep(900000);
            return 0;
        }
        else {
            printf("Password is incorrect: %s\n", inputPassword);
        }

        // Add a small delay to slow down the output for visualization purposes
        Sleep(500);
    }

    return 1;
}
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 2187
#define WORD_LENGTH 8

const char *digit_to_letters[] = {
    "",
    "",
    "ABC",
    "DEF",
    "GHI",
    "JKL",
    "MNO",
    "PRS",
    "TUV",
    "WXY"
};

void generate_words(const char *phone_number, char *current_word, int index, FILE *file) {
    if (index == 7) {
        current_word[index] = '\0';
        fprintf(file, "%s\n", current_word);
        return;
    }

    int digit = phone_number[index] - '0';
    const char *letters = digit_to_letters[digit];

    for (int i = 0; i < strlen(letters); i++) {
        current_word[index] = letters[i];
        generate_words(phone_number, current_word, index + 1, file);
    }
}

int main() {
    char phone_number[8];
    printf("Enter a 7-digit phone number (2-9): ");
    scanf("%7s", phone_number);

    for (int i = 0; i < 7; i++) {
        if (phone_number[i] < '2' || phone_number[i] > '9') {
            printf("Invalid number! Use only digits from 2 to 9.\n");
            return 1;
        }
    }

    FILE *file = fopen("words.txt", "w");
    if (!file) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    char current_word[WORD_LENGTH];
    generate_words(phone_number, current_word, 0, file);

    fclose(file);
    printf("All possible words have been saved in 'words.txt'.\n");

    return 0;
}

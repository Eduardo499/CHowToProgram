#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_WORDS 2187
#define WORD_LENGTH 8
#define MAX_DICT_WORDS 100000

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

char *dictionary[MAX_DICT_WORDS];
int dictionary_size = 0;

void load_dictionary(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening dictionary file.\n");
        exit(1);
    }
    
    char buffer[WORD_LENGTH];
    while (fscanf(file, "%7s", buffer) != EOF) {
        dictionary[dictionary_size] = malloc(strlen(buffer) + 1);
        strcpy(dictionary[dictionary_size], buffer);
        dictionary_size++;
        if (dictionary_size >= MAX_DICT_WORDS) break;
    }

    fclose(file);
    printf("Dictionary loaded with %d words.\n", dictionary_size);
}

int is_valid_word(const char *word) {
    for (int i = 0; i < dictionary_size; i++) {
        if (strcasecmp(dictionary[i], word) == 0) {
            return 1;
        }
    }
    return 0;
}

void generate_words(const char *phone_number, char *current_word, int index, FILE *file) {
    if (index == 7) {
        current_word[index] = '\0';

        if (is_valid_word(current_word)) {
            fprintf(file, "%s\n", current_word);
        }

        for (int i = 1; i < 7; i++) {
            char first_part[WORD_LENGTH], second_part[WORD_LENGTH];
            strncpy(first_part, current_word, i);
            first_part[i] = '\0';
            strcpy(second_part, current_word + i);

            if (is_valid_word(first_part) && is_valid_word(second_part)) {
                fprintf(file, "%s-%s\n", first_part, second_part);
            }
        }
        
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

    load_dictionary("dictionary.txt");

    FILE *file = fopen("valid_words.txt", "w");
    if (!file) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    char current_word[WORD_LENGTH];
    generate_words(phone_number, current_word, 0, file);

    fclose(file);
    printf("Valid words have been saved in 'valid_words.txt'.\n");

    for (int i = 0; i < dictionary_size; i++) {
        free(dictionary[i]);
    }

    return 0;
}

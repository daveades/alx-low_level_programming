#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 * 
 * Return: The capitalized string
 */
char *cap_string(char *str) {
    int capitalize_next = 1; // Flag to indicate if the next character should be capitalized

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize_next && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
            capitalize_next = 0;
        } else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
                   str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
                   str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
                   str[i] == '}') {
            capitalize_next = 1;
        } else {
            capitalize_next = 0;
        }
    }

    return str;
}

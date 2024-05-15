#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if a character is an operator
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Function to check if a string is a valid identifier
int isIdentifier(const char* token) {
    // Check if the first character is a letter
    if (!isalpha(token[0])) {
        return 0;
    }
    // Check if the remaining characters are alphanumeric or underscore
    for (int i = 1; i < strlen(token); i++) {
        if (!isalnum(token[i]) && token[i] != '_') {
            return 0;
        }
    }
    return 1;
}

int main() {
    char expression[100];
    printf("Enter an arithmetic expression: ");
    fgets(expression, sizeof(expression), stdin);

    char* token = strtok(expression, " \t\n");
    int identifier_count = 0;
    int operator_count = 0;

    while (token != NULL) {
        // Check if the token is an identifier
        if (isIdentifier(token)) {
            printf("%s is an identifier\n", token);
            identifier_count++;
        }
        // Check if the token is an operator
        else if (isOperator(token[0])) {
            printf("%c is an operator\n", token[0]);
            operator_count++;
        }
        token = strtok(NULL, " \t\n");
    }

    printf("Number of identifiers: %d\n", identifier_count);
    printf("Number of operators: %d\n", operator_count);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[150];
    int count = 0;

    // Prompt user for input
    printf("Enter a string of characters: ");
    
    // Read input safely, including spaces
    if (fgets(str, sizeof(str), stdin) != NULL) {
        printf("Vowels found: ");
        
        // Loop through each character until the null terminator
        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            char ch = tolower(str[i]); // Convert to lowercase for easy checking
            
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                printf("%c ", str[i]);
                count++;
            }
        }
        
        // Display summary
        if (count == 0) {
            printf("None");
        }
        printf("\nTotal vowels: %d\n", count);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}

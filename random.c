#include <stdlib.h>

// Function to generate a random string of given length
void rand_string(char *dest, size_t length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz"
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                           "0123456789";

    for (size_t i = 0; i < length; i++) {
        int key = rand() % (sizeof(charset) - 1);
        dest[i] = charset[key];
    }
    dest[length] = '\0'; // Null-terminate the string
}

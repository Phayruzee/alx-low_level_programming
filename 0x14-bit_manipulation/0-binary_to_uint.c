#include <stdbool.h>
#include <stddef.h>

unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;

    if (b == NULL) {
        return 0;
    }

    for (int i = 0; b[i] != '\0'; ++i) {
        // Left shift result (multiply by 2)
        result <<= 1;

        // Check if the character is '0' or '1'
        if (b[i] == '1') {
            result += 1;
        } else if (b[i] != '0') {
            // If the character is not '0' or '1', return 0
            return 0;
        }
    }

    return result;
}


#include <stdio.h>
#include <string.h>

char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    } 
    return c;
}

int32_t capitalize_ascii(char str[]) {
    // Return the # of chars capitalized and
    // capitalize the lowercase a-z ASCII of str in-place.
    int32_t count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
       if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // capitalize
            count += 1;
       } 
    }
    return count;
}

int main() {
    char hello[6] = "Hello";
    printf("str before = %s\n", hello);
    int32_t num_cap = capitalize_ascii(hello);
    printf("num cap = %d cap str = %s\n", num_cap, hello);
    // char hello[6] = "Hello";
    // char hi[2] = {'h', 'i'}; // no NULL terminator!
    // puts(hello);
    // puts(hi);

    // char letters[3] = {'h', 'i', '\0'};
    // char letters2[3] = {104, 105, 0};
    // printf("%s len = %lu\n", letters, strlen(letters));
    // printf("%s len = %lu\n", letters2, strlen(letters2));

    // char my_char = 'K';
    // char my_char2 = 'r';
    // printf("to_lower(%c) = %c\n", my_char, to_lower(my_char));
    // printf("to_lower(%c) = %c\n", my_char2, to_lower(my_char2));
}


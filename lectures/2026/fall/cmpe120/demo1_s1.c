#include <stdio.h>
#include <stdint.h>

void print_abc_int(char c) {
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            printf("%c %d\n", c, c);
        } else if (i >= 1) {
            printf("%c %d\n", c + i, c + i);
        }
    }
}

uint8_t bin8_to_dec(char bin_arr[]) {
    // Given a char array (array[0])
    // holding an unsigned binary value
    // e.g., [0,0, .., 1], representing 8 bits
    // return the decimal value
}

int main() {
    char bin_arr[8] = {'1','1','0','0','1','1','0','1'};
    printf("%d\n", bin8_to_dec(bin_arr));
    uint8_t num = 0b11001101;
    printf("%d\n", num);

    /** wow this is a block comment
    puts("Hello world!");
    printf("Hello world!\n");
    printf("%s\n", "Hello world!\n");
    */
    char my_char = 'a';
    print_abc_int(my_char);

    return 0; // return non-zero if something bad happen
}


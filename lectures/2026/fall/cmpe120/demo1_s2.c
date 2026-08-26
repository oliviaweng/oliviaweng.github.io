#include <stdio.h>
#include <stdint.h>

void print_abc_int(char c) {
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            printf("%c %d\n", c, c);
        } else if (i == 1) {
            printf("%c %d\n", c + 10, c + 10);
        } else {
            printf("%c %d\n", c + i, c + i);
        }
    }
}

uint8_t bin8_to_dec(char bin_arr[]) {
    // Given a char array with a binary
    // value, e.g., ['0','0',..,'1'],
    // of size 8, return the decimal value
    // Example: [0,0,0,0,0,0,0,1] -> return 1
    uint8_t result = 0;
    for (int i = 0; i < 8; i++) {
        uint8_t val = 128;
        for (int j = 0; j < i; j++) {
            val = val / 2;
        }
        if (bin_arr[i] == '1') {
            result += val;
        }
    }
    return result;
}


int main() {
    uint8_t num = 0b00000001;
    char my_bin_arr[8] = {'0','0','0','0','0','0','0','1'};
    printf("%d\n", num);
    printf("%d\n", bin8_to_dec(my_bin_arr));
    // this is a comment
    /**
     * this is a multi-line 
     * comment in a block
     */
    // puts("Hello world!");
    // printf("%s\n", "Hello world!");
    // printf("%d\n", 10);
    // printf("%c\n", 'a');
    // 
    // char my_char = 'a';
    // print_abc_int(my_char);

    return 0; // something went wrong -> non-zero val
}



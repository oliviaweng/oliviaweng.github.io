#include <stdio.h>
#include <stdint.h>


uint8_t bin8_to_dec(char bin_arr[]) {
    // Given a char array (e.g., array[0])
    // holding an unsigned binary value
    // e.g., [0,0, .., 1], representing 8 bits
    // return the decimal value
    uint8_t result = 0;
    for (int i = 0; i < 8; i++) {
        uint8_t a = 128;
        for (int j = 0; j < i; j++) {
            a = a / 2;
        }
        if (bin_arr[i] == '1') {
            result += a;
        }
    }
    return result;
}

int main() {
    int16_t a_s = -1;
    int a = a_s;
    printf("a = %d a_s = %d\n", a, a_s);


    char bin_arr[8] = {'1','1','0','0','1','1','0','1'};
    printf("%d\n", bin8_to_dec(bin_arr));
    uint8_t num = 0b11001101;
    printf("%d\n", num);

    return 0; // return non-zero if something bad happen
}


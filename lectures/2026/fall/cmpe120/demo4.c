#include <stdio.h>
#include <string.h>
#include <stdint.h>

int bitwise_is_even(int8_t num) {
    // LSB is 0 -> even
    // LSB is 1 -> odd
    // return 1 if even, 0 if odd
    return ((~num) & 1);
}

uint8_t codepoint_size(char string[]) {
    // if first byte 0xxxxxxx -> 1 byte (ASCII)
    // if            110xxxxx -> 2 byte
    // if            1110xxxx -> 3 byte
    // if            11110xxx -> 4 byte

    if ((string[0] & 0b10000000) == 0) {
        return 1;
    } else if ((string[0] & 0b11111000) == 0b11110000) {
        return 4;
    } else if ((string[0] & 0b11110000) == 0b11100000) {
        return 3;
    } else if ((string[0] & 0b11100000) == 0b11000000) {
        return 2;
    }
    return -1;
}

int32_t code_point_2(char c1, char c2) {
    // 110xxxxx 10xxxxxx
    // result: xxxxx xxxxxxx
    char byte1 = c1 & 0b00011111;
    char byte2 = c2 & 0b00111111;
    int32_t codepoint = byte2 | (byte1 << 6);
    return codepoint;
}

uint32_t utf8_strlen(char string[]) {
    // Given char[] representing a utf8 encoded string
    // return the number of utf8 codepoints (characters) in string.
    // Input will always be valid utf8 and will not exceed 2048 bytes.
    uint32_t len = 0;
    uint32_t i = 0;
    while(string[i] != 0) {
        uint32_t codepoint_size = 0;
        if ((string[i] & 0b10000000) == 0) {
            codepoint_size = 1;
        } else if ((string[i] & 0b11111000) == 0b11110000) {
            codepoint_size = 4;
        } else if ((string[i] & 0b11110000) == 0b11100000) {
            codepoint_size = 3;
        } else if ((string[i] & 0b11100000) == 0b11000000) {
            codepoint_size = 2;
        }
        len += 1;
        i += codepoint_size;
    }
    return len;
}

int main() {
    char str[] = "⭐";
    printf("%s codepoint size = %d\n", str,  codepoint_size(str));
    char my_str[] = "é"; 
    printf("%s is code point value %d\n", my_str, code_point_2(my_str[0],my_str[1]));
    char str2[] = "⭐José";
    printf("%s has len = %d\n", str2, utf8_strlen(str2)); 
    // char str[] = "José";
    // for (int i = 0; str[i] != '\0'; i++) {
    //     printf("0x%x\n", (unsigned char) str[i]);
    // }
    // printf("len = %lu\n", strlen(str));

    // int8_t num1 = 100;
    // int8_t num2 = -5;
    // printf("%d is_even: %d\n", num1, bitwise_is_even(num1));
    // printf("%d is_even: %d\n", num2, bitwise_is_even(num2));
}

#include <stdio.h>
#include <stdlib.h>

void swap_by_val(int a, int b) {
    // Swaps the values of a & b
    int temp = a;
    a = b;
    b = temp;
}

void swap_by_ptr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int *reverse(int arr[], int n) {
    int reversed[n];
    for (int i =0; i < n; i++) {
        reversed[i] = arr[n - i - 1];
    }
    int *to_return = reversed;
    return to_return;
}

int *reverse_fix(int arr[], int n) {
    int *reversed = malloc(n * sizeof(int));
    if (reversed == NULL) {
        printf("Mem alloc failed!\n");
        return NULL;
    }
    for (int i =0; i < n; i++) {
        reversed[i] = arr[n - i - 1];
    }
    return reversed;
}

int main(int argc, char *argv[]) {
    int *p = 0x0;
    printf("%d\n", *p);
    // int arr[3] = {10, 20, 30};
    // int *reversed = reverse_fix(arr, 3);
    // for (int i = 0; i < 3; i++) {
    //     printf("%d\n", reversed[i]);
    // }
    // free(reversed);
    // int a = 0;
    // int b = 1;
    // printf("before swap: a=%d b=%d\n", a, b);
    // swap_by_val(a, b);
    // printf("after swap: a=%d b=%d\n", a, b);
    // swap_by_ptr(&a, &b);
    // printf("after swap_by_ptr: a=%d b=%d\n", a, b);

}

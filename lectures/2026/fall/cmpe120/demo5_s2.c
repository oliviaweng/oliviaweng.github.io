#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[]) {

    int num = 42;
    int *pnum = &num;
    printf("%p\n", &num);
    printf("%p\n", pnum);

    char a[] = {'H', 'i', '\0'};
    char *pa = a;

    // printf("Indexing values: %c %c\n", a[0], pa[0]);
    // printf("Dereferencing values: %c %c\n", *a, *pa);

    // printf("Indexing values: %c %c\n", a[1], pa[1]);
    // printf("Dereferencing values: %c %c\n", *(a+1), *(pa+1));
    // char b[] = {'C', 'M', 'P', 'E'};
    // char *ptr_b = b;

    // printf("Addrs: %p %p\n", b, ptr_b);
    // assert(b == ptr_b);

    // printf("Values: %c %c\n", a[0], pa[0]);
    // assert(pa[0] == 'H');

    // printf("Addresses: %p %p\n", a, pa);
    // assert(a == pa);
}

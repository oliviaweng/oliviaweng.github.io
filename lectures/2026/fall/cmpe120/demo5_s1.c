#include <stdio.h>
#include <assert.h>


int main(int argc, char *argv[]) {
    char a[] = {'H', 'i'};
    char *pa = a;

    // printf("Values: %c %c\n", a[0], pa[0]);
    // assert(pa[0] == 'H');

    // printf("Addresses: %p %p\n", a, pa);
    // assert(a == pa);

    // printf("Indexing values: %c %c\n", a[0], pa[0]);
    // printf("Derefencing values: %c %c\n", *a, *pa);
    // printf("Indexing values: %c %c\n", a[1], pa[1]);
    // printf("Derefencing values: %c %c\n", *(a+1), *(pa+1));

    int num = 42;
    int *pnum = &num;
    printf("num's addr = %p\n", &num);
    printf("pnum = %p\n", pnum);
    printf("&pnum = %p\n", &pnum);
}

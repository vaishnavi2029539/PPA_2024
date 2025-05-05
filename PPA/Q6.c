#include<stdio.h>

int main() {
    double no = 2.14;         // `no` is a double; address of `no` = 180
    double *a = &no;          // Pointer `a` stores the address of `no`; address of `a` = 200
    double **b = &a;          // Pointer-to-pointer `b` stores the address of `a`; address of `b` = 300
    double ***c = &b;         // Pointer-to-pointer-to-pointer `c` stores the address of `b`; address of `c` = 400
    double ****d = &c;        // Pointer-to-pointer-to-pointer-to-pointer `d` stores the address of `c`; address of `d` = 500

    // Calculating sizes
    printf("%d", sizeof(no));     // Size of `no` (double)
    printf("%d", sizeof(a));      // Size of pointer `a` (stores address of `no`)
    printf("%d", sizeof(b));      // Size of pointer-to-pointer `b`
    printf("%d", sizeof(c));      // Size of pointer-to-pointer-to-pointer `c`
    printf("%d", sizeof(d));      // Size of pointer-to-pointer-to-pointer-to-pointer `d`
    printf("%d", sizeof(**d));    // Size of `b` (pointer-to-pointer)
    printf("%d", sizeof(**c));    // Size of `a` (pointer to double)
    printf("%d", sizeof(****d));  // Size of `no` (double)
    printf("%d", sizeof(***c));   // Size of `b` (pointer-to-pointer)

    return 0;
}

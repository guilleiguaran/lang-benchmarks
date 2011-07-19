#include <stdio.h>

int fib(int n) {
    if (n == 0 || n == 1) {
      return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main(int argc, char *argv[]) {
    int i = 0;
    for(i = 0; i < 36; i++) {
        printf("n=%d => %d\n", i, fib(i));
    }
    return 0;
}

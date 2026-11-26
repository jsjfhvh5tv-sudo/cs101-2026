#include <stdio.h>

int add_func(int a, int b) {
    return a + b;
}

int main() {
    int (*func_ptr)(int, int);
    func_ptr = &add_func; 

    printf("%d\n", func_ptr(1, 2));
    return 0;
}

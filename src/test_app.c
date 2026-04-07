
#include <stdio.h>

int main() {
    printf("Hello from processor architecture build!\n");

#if defined(__i386__) || defined(__x86_64__)
    printf("Architecture: x86\n");

#elif defined(__arm__)
    printf("Architecture: ARM\n");

#elif defined(__riscv)
    printf("Architecture: RISC-V\n");

#else
    printf("Architecture: Unknown\n");
#endif

    return 0;
}


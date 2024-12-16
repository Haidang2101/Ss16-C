#include <stdio.h>

int main() {
    int a=100;
    int *aptr=&a;
    printf("gia tri cua a là : %d\n",a);
    printf("gia chi cua a là : %lu\n",&a);
    printf("gia tri cua a là : %lu\n",*aptr);
    printf("gia chi cua a là : %lu\n",aptr);
    return 0;
}

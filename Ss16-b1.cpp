#include <stdio.h>

int main() {
    int a=100;
    int *aptr=&a;
    printf("gia tri cua a l� : %d\n",a);
    printf("gia chi cua a l� : %lu\n",&a);
    printf("gia tri cua a l� : %lu\n",*aptr);
    printf("gia chi cua a l� : %lu\n",aptr);
    return 0;
}

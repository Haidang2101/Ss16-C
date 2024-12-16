#include <stdio.h>
int sum(int *a,int *b, int *result){
    *result = *a+*b;
    return *result;
}
int main() {
    int a = 6;
    int b = 13;
    int result;
    sum(&a,&b,&result);
    printf("tung hai so là : %d", result);
    return 0;
}

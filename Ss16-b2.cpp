#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main() {
    int a=8;
    int b=7;
    swap(&a,&b);
    printf("%d %d",a,b);
    
    return 0;
}
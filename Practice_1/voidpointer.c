#include <stdio.h>
void main(){
    void *p;
    int a= 10;
    p = &a;
    printf("%d",*(int*)p);
}
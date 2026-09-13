#include <stdio.h>

int main(void)
{
    int a, b, c, *ptr;
    
    a = 3; // enda
    b = 7; // endb
    printf("a=%d, b=%d\n", a, b); //a = 3 b = 7
    
    ptr = &a; // enda
    c = *ptr; // c = 3
    ptr = &b; // endb
    a = *ptr; // a = 7
    ptr = &c; // endc
    b = *ptr; // b = 3
    
    printf("a=%d, b=%d\n", a, b); //a = 7, b = 3
    
    return 0;
}
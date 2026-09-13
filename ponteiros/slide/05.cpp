#include <stdio.h>

int main(void)
{
    int a, b, *pt1, *pt2; 
    
    pt1 = &a; // pt1 = enda
    pt2 = &b; // pt2 = endb
    a = 1; 
    (*pt1)++; // a = 2 e pt1 = 2
    b = a + *pt1; // b = 2 + 2 = 4
    *pt2 = *pt1 * *pt2; // b = 2 * 4 = 8
    
    printf("a=%d, b=%d, *pt1=%d, *pt2=%d\n", a, b, *pt1, *pt2);
    
    return 0;
}
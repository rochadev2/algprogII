#include <stdio.h>

int main() {
    int m, n;
    int A[15][15];
    int B[15];
    int C[15];
    
    if (scanf("%d %d", &m, &n) != 2) return 1;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }
    
    for (int i = 0; i < m; i++) {
        C[i] = 0;
        for (int j = 0; j < n; j++) {
            C[i] += A[i][j] * B[j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        if (i == m - 1) {
            printf("%d", C[i]);
        } else {
            printf("%d ", C[i]);
        }
    }
    printf("\n");
    
    return 0;
}
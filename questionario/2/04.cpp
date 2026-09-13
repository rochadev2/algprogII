#include <stdio.h>

int main() {
    int m, n;
    int a[100][100], b[100][100];
    
    while (scanf("%d %d", &m, &n) == 2) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &b[i][j]);
            }
        }
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int c = a[i][j] + b[i][j];
                if (j == n - 1) {
                    printf("%d", c);
                } else {
                    printf("%d ", c);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
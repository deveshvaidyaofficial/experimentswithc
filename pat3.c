#include <stdio.h>
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2 * (rows - i) - 2; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%d ", i + 1);
        }
        printf("\n");
    }
    return 0;
}

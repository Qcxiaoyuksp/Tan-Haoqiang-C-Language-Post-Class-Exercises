#include <stdio.h>
#include <stdlib.h>

void check(int *);

int main() {
    int *p1, i;
    p1 = (int *)malloc(5 * sizeof(int));
    for(i = 0; i < 5; i++)
        scanf("%d", p1 + i);
    check(p1);
    return 0;
}

void check(int *p) {
    int i;
    printf("They are fail:");
    for(i = 0; i < 5; i++)
        if (p[i] < 60)
            printf("%d ", p[i]);
    printf("\n");
}

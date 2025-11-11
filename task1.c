#include <stdio.h>
int main() {
    int nums[4] = {1, 2, 3, 4};
    int sum = 0;
    printf("[");

    for (int i = 0; i < 4; i++) {
        sum = sum + nums[i]; 
        printf("%d", sum);
        if (i < 3) {
            printf(", "); 
        }
    }
    printf("]\n");

    return 0;
}

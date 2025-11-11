#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6};  
    int n = 3;  
    int result[2 * n];

    for (int i = 0; i < n; i++) {
        result[2 * i] = nums[i];       
        result[2 * i + 1] = nums[i + n]; 
    }
    printf("[");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d", result[i]);
        if (i < 2 * n - 1){
            printf(", ");
        }
    }    
    printf("]\n");

    return 0;
}

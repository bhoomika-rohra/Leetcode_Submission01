#include <stdio.h>
int main() {
    int nums[5] = {4, 3, 1, 2, 5};  
    int n = 5;                     
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            nums[i] = 0;
        } else {
            nums[i] = 1;
        }
    }
    
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < 4){
            printf(", ");
        }
    }    
    printf("]\n");

    return 0;
}

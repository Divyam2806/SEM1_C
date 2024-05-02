#include <stdio.h>

int main() {
 

    if (15 <= 0) {
        printf(" Please enter a positive number of elements.\n");
        return 1; 
    }

    int user_array[15];
    int sum = 0;

    for (int i = 0; i < 15; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &user_array[i]);
        sum += user_array[i];
    }

    
    float average = (float)sum / 15;

    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}
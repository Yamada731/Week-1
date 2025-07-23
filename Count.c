#include <stdio.h>

int main() {
    int arr[] = {3, -2, 5, -7, 8, 0, -1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positive = 0, negative = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        }
    }

    printf("Number of positive numbers: %d\n", positive);
    printf("Number of negative numbers: %d\n", negative);

    return 0;
}

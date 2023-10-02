#include <stdio.h>


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int position = 2;

    if (position < 0 || position >= n) {
        printf("Invalid position to delete.\n");
        return 1;
    }

    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

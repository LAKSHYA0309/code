#include <stdio.h>

int main() {
    int arr[100];
    int size, position, element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (0-based) where the element should be inserted: ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position. Element cannot be inserted.\n");
    } else {
        for (int i = size; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position] = element;
        size++;

        printf("Array after insertion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

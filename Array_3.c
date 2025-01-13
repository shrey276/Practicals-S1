/********** [Program to delete elements from an array] **********/

#include <stdio.h>

int main() {
    int x;
    printf("Enter number of elements: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[x], i, loc, n;

    // Input array elements
    for (i = 0; i < x; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input number of deletions
    printf("How many elements do you want to delete? ");
    scanf("%d", &n);

    if (n > x || n < 0) {
        printf("Invalid number of deletions.\n");
        return 1;
    }

    // deletion
    for (int j = 0; j < n; j++) {
        printf("Enter the location of the %d element to be deleted: ", j + 1);
        scanf("%d", &loc);

        
        if (loc < 1 || loc > x) {
            printf("Invalid location. Skipping deletion.\n");
            j--; 
            continue;
        }

        // Adjust index
        loc--;

        // Shift elements 
        for (i = loc; i < x - 1; i++) {
            arr[i] = arr[i + 1];
        }

        x--; 
    }

    // Output 
    printf("The elements in the array after deletion: ");
    for (i = 0; i < x; i++) {
        printf("%d", arr[i]);
        if (i < x - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}

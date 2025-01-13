//function for fibonacci using recursion 

#include <stdio.h>

// Function prototype
int fibbo(int n);

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);  

    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibbo(i));  
    }
    printf("\n");

    return 0;
}

// Function definition for Fibonacci 
int fibbo(int n) {
    if (n == 0) {
        return 0;  
    }
    if (n == 1) {
        return 1;  
    }
    return fibbo(n - 1) + fibbo(n - 2);  //recursion
}

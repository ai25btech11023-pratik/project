#include <stdio.h>

// Function to find and print two missing numbers
void findTwoMissingNumbers(int arr[], int n) {
    int mark[n + 1]; // Boolean marker array (0: missing, 1: present)
    
    // Initialize mark array as 0
    for (int i = 0; i <= n; i++)
        mark[i] = 0;
    
    // Mark all present values in arr[]
    for (int i = 0; i < n - 2; i++)
        mark[arr[i]] = 1;
    
    // Print missing numbers
    printf("The two missing numbers are: ");
    for (int i = 1; i <= n; i++)
        if (!mark[i])
            printf("%d ", i);
    printf("\n");
}

// Example usage:
int main() {
    int arr[] = {1, 3, 5, 6}; // Example array
    int n = 2 + sizeof(arr) / sizeof(arr[0]); // Total range N
    findTwoMissingNumbers(arr, n);
    return 0;
}

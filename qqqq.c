#include <stdio.h>
#include <stdlib.h>

// Function to find the closest k elements to x
void findClosestElements(int arr[], int n, int k, int x) {
    int left = 0, right = n - 1, mid;

    // Binary search to find the closest element to x
    while (left < right) {
        mid = left + (right - left) / 2;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid;
    }

    // Initialize two pointers
    left = right - 1;
    right = right;

    // Collect k closest elements
    int result[k], count = 0;
    while (count < k) {
        if (left < 0) {
            result[count++] = arr[right++];
        } else if (right >= n) {
            result[count++] = arr[left--];
        } else if (abs(arr[left] - x) <= abs(arr[right] - x)) {
            result[count++] = arr[left--];
        } else {
            result[count++] = arr[right++];
        }
    }

    // Sort the result array
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (result[i] > result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }

    // Print the k closest elements
    printf("[]", k);
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int n, k, x;

    // Input size of array
   printf("n=");
    scanf("%d", &n);

    int arr[n];
printf("arr=");
    // Input sorted array
 
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input values of k and x
 printf("k=");
    scanf("%d ", &k);
  printf("x=");
    scanf("%d", &x);

    // Call function to find k closest elements
    findClosestElements(arr, n, k, x);

    return 0;
}

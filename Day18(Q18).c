#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;

    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    printf("Rotated array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}

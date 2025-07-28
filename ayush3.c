#include <stdio.h>
int main() {
    int arr[] = {1, 9, 3, 7}, first = -1, second = -1, n = 4;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    printf("Second Largest: %d\n", second);
    return 0;
}

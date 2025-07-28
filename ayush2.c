#include <stdio.h>
int main() {
    int arr[] = {1, 9, 3, 7}, max = arr[0], n = 4;
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    printf("Largest: %d\n", max);
    return 0;
}

#include <stdio.h>
int main() {
    int arr[100] = {1, 2, 3, 4};
    int n = 4, element = 5;
    arr[n] = element;
    n++;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

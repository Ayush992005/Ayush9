#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 1}, n = 5, freq[100] = {0};
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
    for (int i = 0; i < 100; i++)
        if (freq[i] > 0) printf("%d: %d\n", i, freq[i]);
    return 0;
}

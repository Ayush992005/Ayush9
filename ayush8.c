#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "madam";
    int n = strlen(str), flag = 1;
    for (int i = 0; i < n / 2; i++)
        if (str[i] != str[n - i - 1]) flag = 0;
    printf(flag ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}

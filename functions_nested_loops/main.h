#include <stdio.h>

// Function prototype
int _isalpha(int c);

void test_isalpha() {
    int n = 'A'; // Example input
    int r = _isalpha(n); // This should call your function
    printf("Result: %d\n", r); // Example output
}

int main() {
    test_isalpha();
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int  i,index = 0;
      long long n, k;

    cin >> n >> k;

    // Validate input
    if (n <= 0 || k <= 0 || n > 100) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    int arr[100];

    // Fill array with odd numbers first
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            arr[index++] = i;
        }
    }

    // Then fill array with even numbers
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            arr[index++] = i;
        }
    }

    // Validate k against the total number of elements
    if (k >= 1 && k <= index) {
        cout << arr[k - 1] << endl; // Output the k-th element
    } else {
        cout << "Invalid position!" << endl;
    }

    return 0;
}

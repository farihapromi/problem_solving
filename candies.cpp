#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, index1, index2, sum = 0;
    cin >> N;  

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];  \
    }

    cin >> index1 >> index2;  // Read the range

    // Sum the candies from index1 to index2 (inclusive)
    for (int j = index1; j <= index2; j++) {
        sum += arr[j];
    }

    cout << sum << endl;  // Output the result

    return 0;
}

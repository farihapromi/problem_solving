#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout<<"enter number";
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }


    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

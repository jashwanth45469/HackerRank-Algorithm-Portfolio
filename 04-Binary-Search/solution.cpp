#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& values, int target) {
    int left = 0;
    int right = values.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (values[middle] == target) {
            return middle;
        }

        if (values[middle] < target) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> values(n);

    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    int target;
    cin >> target;

    int result = binarySearch(values, target);

    cout << result << endl;

    return 0;
}
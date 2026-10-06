#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n = 5;
    vector<long long> values(n);

    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    long long total = 0;

    for (long long value : values) {
        total += value;
    }

    long long minValue = *min_element(values.begin(), values.end());
    long long maxValue = *max_element(values.begin(), values.end());

    long long minSum = total - maxValue;
    long long maxSum = total - minValue;

    cout << minSum << " " << maxSum << endl;

    return 0;
}
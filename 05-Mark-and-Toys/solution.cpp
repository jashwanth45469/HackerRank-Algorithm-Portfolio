#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long budget;

    cin >> n >> budget;

    vector<long long> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int count = 0;
    long long spent = 0;

    for (long long price : prices) {
        if (spent + price <= budget) {
            spent += price;
            count++;
        }
        else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
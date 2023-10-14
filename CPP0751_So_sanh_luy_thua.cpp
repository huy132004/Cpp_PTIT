#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int m, n;
        cin >> m >> n;
        vector<int> x(m);
        vector<int> y(n);

        for (int i = 0; i < m; i++) {
            cin >> x[i];
        }

        for (int j = 0; j < n; j++) {
            cin >> y[j];
        }

        // Sort the arrays
        sort(x.rbegin(), x.rend()); // Sort in descending order
        sort(y.begin(), y.end());    // Sort in ascending order

        int count = 0;
        int j = 0;

        for (int i = 0; i < m; i++) {
            if (x[i] == 1) {
                continue;
            }

            // Find the number of elements in Y[] which satisfy the condition
            while (j < n && y[j] <= x[i]) {
                j++;
            }

            count += (n - j);
        }

        cout << count << endl;
    }
}

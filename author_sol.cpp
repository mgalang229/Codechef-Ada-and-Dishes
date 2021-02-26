#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> c(n);
		for (int i = 0; i < n; i++) {
			cin >> c[i];
		}
		// sort the array in non-increasing order
		sort(c.rbegin(), c.rend());
		// create two variables for the 2 burners
		int burner1 = 0;
		int burner2 = 0;
		for (int i = 0; i < n; i++) {
			if (burner1 < burner2) {
				// add the current minutes of c[i]-th dish if burner1 < burner2
				burner1 += c[i];
			} else {
				// otherwise, add it to the time in burner2
				burner2 += c[i];
			}
		}
		// get the maximum time between the 2 burners to get the minimum time needed
		cout << max(burner1, burner2) << '\n';
	}
	return 0;
}

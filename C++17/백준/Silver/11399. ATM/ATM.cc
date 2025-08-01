#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio();
	cin.tie(0); cout.tie(0);

	int n,pp,sum = 0;
	cin >> n;
	vector<int> p;
	for (int i = 0; i < n; i++) {
		cin >> pp;
		p.push_back(pp);
	}
	sort(p.begin(), p.end());

	for (int i = 0; i < n; i++) {
		sum += (n - i) * p[i];
	}
	cout << sum;
}
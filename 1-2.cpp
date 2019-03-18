#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N;
	int K;
	cin >> N;
	cin >> K;
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	vector<int> b(K);
	for (int i = 0; i < K; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < K; i++) {

		int l = 0;
		int r = N - 1;
		bool found = false;
		while (l <= r) {

			int m = (l + r) / 2;
			if (a[m] == b[i]) {
				found = true;
				break;
			}
			else if (a[m] < b[i]) {
				l = m + 1;
			}
			else {
				r = m - 1;
			}
		}
		if (found)
		{
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

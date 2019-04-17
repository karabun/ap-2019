#include <iostream>
#include <string>
using namespace std;


void mergeSort(int a[], int l, int r) {
	if (l == r) {
		
		return;
	}

	int m = (l + r) / 2;
	mergeSort(a, l, m);
	mergeSort(a, m + 1, r);
	int pointer1 = l;
	int pointer2 = m + 1;
	int c[r - l + 1];
	for (int i = 0; i < r - l + 1; i++) {
		if ((pointer1 <= m) && ((pointer2 > r) || (a[pointer1] < a[pointer2]))) {
			c[i] = a[pointer1];
			pointer1++;
		}
		else {
			c[i] = a[pointer2];
			pointer2++;
		}
	}
	
	for (int i = 0; i <  r - l + 1; i++) {
		a[i + l] = c[i];
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int l = 0, r = n - 1;
	mergeSort(a, l, r);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

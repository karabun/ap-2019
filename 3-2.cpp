
#include <iostream>
#include <cstdlib>
using namespace std;
void quickSort(int a[], int l, int r) {
	if (l >= r) {
		return;
	}
	int i = l - 1;
	int j = r + 1;
	int idx = rand() % (r - l + 1) + l;
	int pivot = a[idx];
	while (true) {
		do {
			i++;
		} while (a[i] < pivot);
		do {
			j--;
		} while (a[j] > pivot); 
		
			if (i >= j) {
				break;
			}
		
		swap(a[i], a[j]);
	}
	quickSort (a, l, j);
	quickSort (a, j + 1, r);
	
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
	quickSort(a, l, r);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	
	int K;
	cin >> K;
	vector<int> a(K);
	for (int i = 0; i < K; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < K; i++){
		int maxIndex = 0;
		for (int j = 0; j <= K - i - 1; j++){
			if (a[j] > a[maxIndex]){
				maxIndex = j;
			}
		}
		swap(a[maxIndex], a[K - i - 1]);
	}
	for (int i = 0; i < K; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
	
	return 0;
}

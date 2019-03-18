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
	
	for (int i = 0; i < K - 1; i++) {
		for (int j = 0; j + 1 < K; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
                
			}
		}
		
    }
    
	for (int i = 0; i < K; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
		return 0;
}



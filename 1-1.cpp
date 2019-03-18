#include <iostream>
#include <string>;
#include <vector>;
 using namespace std;

 int main() {

  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++)
  {
   cin >> a[i];
  }

  int x;
  cin >> x;
  int counter = 0;
  for (int i = 0; i < N; i++) {

   if (x == a[i])
    counter++;
  }
  cout << counter;

  return 0;
 }


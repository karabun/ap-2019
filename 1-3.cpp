#include <iostream>
#include <string>
using namespace std; 

int a[20000], b[20000];
int main() {
 int n;
 int k;
 cin >> n;
 cin >> k;
 for (int i = 1; i <= n; i++) {
  cin >> a[i];
 }
 for (int i = 1; i <= k; i++) {
  cin >> b[i];
 }

 for (int i = 1; i <= k; i++) {
  int l = 1;
  int r = n;
  int first=0;
  while (l <= r) {
   int m = (l + r) / 2;
   if (a[m] == b[i]) {
    first = m;
    r = m - 1;
   }
   else if (a[m] > b[i]) {
    r = m - 1;
   }
   else {
    l = m + 1;
   }
  }
  l = 1;
  r = n;
  int last = 0;
  while (l <= r) {
      int  m = (l + r) / 2;
   if (a[m] == b[i]) {
    last = m;
    l = m +1;
   }
   else if (a[m] > b[i]) {
    r = m - 1;
   }
   else  {
    l = m + 1;
   }
  }
  if ( last == 0 || first == 0 ) {
   cout << "0" << endl;
  }
  else {
   cout << first << " " << last<< endl;
  }
 }
 return 0;
}

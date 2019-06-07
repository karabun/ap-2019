#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main () {
 string k;
 vector<int> queue;
 int value;
 while (cin >> k) {
  if (k == "push") { //+
   cin >> value;
   queue.push_back(value);
   cout << "ok" << endl;
  } else if (k == "pop") { //+
   cout << queue.front() << endl;
   queue.erase(queue.begin());
  } else if (k == "exit") { //+
   cout << "bye";
   break;
  } else if (k == "size") { //+
   cout << queue.size() << endl;
  } else if (k == "clear") { //+
   queue.clear();
   cout << "ok" << endl;
  } else if (k == "front") { //+
   cout << queue.front() << endl;
  }
 }

}

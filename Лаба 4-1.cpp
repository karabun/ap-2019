#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main () {
 string k;
 vector<int> stack;
 int value;
 while (cin >> k) {
 	if (k == "push") {
 		cin >> value;
 		stack.push_back(value);
 		cout << "ok" << endl;
	 } else if (k == "pop") {
	 	cout << stack.back() << endl;
	 	stack.pop_back();
	 } else if (k == "exit") {
	 	cout << "bye";
	 	break;
	 } else if (k == "size") {
	 	cout << stack.size() << endl;
	 } else if (k == "clear") {
	 	stack.clear();
	 	cout << "ok" << endl;
	 } else if (k == "back") {
	 	cout << stack.back() << endl;
	 }
 }

}

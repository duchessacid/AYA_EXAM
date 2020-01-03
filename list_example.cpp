#include <iostream>
#include <list>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {

	list<int> L(5);
	for (auto& l : L) {
		l = rand() % 100;
		cout << l << " ";
	}
	for (auto l : L) {
		cout << l << "  ";
	}
	list<int>::iterator it;
	it = min_element(L.begin(), L.end());
	L.insert(it, 1);
	cout << *it;
	system("pause");
	return 0;
}

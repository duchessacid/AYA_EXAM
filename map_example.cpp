#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<int, string> M;
	M.insert(make_pair(1, "Katya"));
	M.insert(make_pair(2, "Vanya"));
	M.insert(make_pair(3, "svyat"));
	M.emplace(4, "Petya");
	for (const auto& pair : M) {
		cout << pair.first;
	}

	return 0;
}

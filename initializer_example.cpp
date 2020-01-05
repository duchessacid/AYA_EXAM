#include <initializer_list>
using namespace std;

class Array {
	size_t length;
	int* data;
public:
	Array(size_t lenght) : length(length) {
		data = new int[lenght];
	}

	explicit Array(const initializer_list<int>& l) : length(l.size()) {
		int n = 0;
		for (auto& elem : l){
			data[n] = elem;
			n++;
		}
	}
	~Array() {
		delete[] data;
	}
};

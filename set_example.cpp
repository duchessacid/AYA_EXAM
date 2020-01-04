static set<int> nums;
int getrandom() {
	bool f = 0;
	int x;
	while (!f) {
		x = rand() % 100;
		if (nums.find(x) == nums.end()) {
			nums.insert(x);
			f = 1;
		}
	}
	return x;
}

int main() {
	set<int> S;
	S.insert(40);
	S.insert(20);
	S.insert(10);
	set<int>::iterator it;
	set<int> S1(S.begin(), S.end());
	S1.erase(S1.begin(), S.find(20));

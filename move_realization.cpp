class String {
	char* data = nullptr;
public:
	String() = default;
	String(String&& other) {
		swap(data, other.data);
	}
	String& operator=(String&& other) {
		if (this != &other) swap(data, other.data);
		return *this;
	}
};

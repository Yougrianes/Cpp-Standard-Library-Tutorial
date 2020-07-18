#include <iostream>

using namespace std;

template <class T>
inline const T& my_max(const T& a, const T& b)
{
	return a < b ? b : a;
}

int main()
{
	int ia;
        int ib;
	ia = 10;
	ib = 20;
	const int& c = my_max(ia, ib);
	cout << c << " is bigger." << endl;

	return 0;
}

#include <iostream>

using namespace std;

template <typename T>
class MyClass;

template <typename T>
class MyClass
{
	typename T::SubType * ptr;
};

class iT
{
public:
	typedef int SubType;
};

int main()
{
	iT test;
	MyClass<iT> x;
	cout << "1: " << endl;
	return 0;
}

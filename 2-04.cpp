#include <iostream>

using namespace std;

template <typename T>
class MyClass
{
	private:
		T value;
	public:
		template <class X>	// member template
		void assign (const MyClass<X>& x)
		{
			// allows different template types from T to X.
			value = x.get_value();
		}
		inline T get_value() const 
		{
			return value;
		}
		void set_value(const T _input)
		{
			value = _input;
		}
};

int main()
{
	MyClass<int> iclass;
	iclass.set_value(20);
	MyClass<double> dclass;
	dclass.set_value(30.0);
	dclass.assign(dclass);
	cout << "dclass: " << dclass.get_value() << endl;
	dclass.assign(iclass);
	cout << "2-dclass: " << dclass.get_value() << endl;

	return 0;
}

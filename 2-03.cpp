#include <iostream>

using namespace std;

template <class T>
class MyClass 
{
	private:
		T value;
	public:
		void assign (const MyClass<T>& x)
	       	{
			// x must have same T as *this.
			value = x.value;
		}
		MyClass (const T x)
		{
			value = x;
		}
		MyClass ()
		{
			value = 0;
		}
		inline const T get_value ()
		{
			return value;
		}	
};

int main()
{
	MyClass<int> iClass(20);
	cout << "value: " << iClass.get_value() << endl;
	return 0;
}

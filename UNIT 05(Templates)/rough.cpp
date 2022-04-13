#include <iostream>

using namespace std;
template<class T>
class A
{
    public:
	T func(T a, T b){
		return a/b;
	}
};

int main()
{
	A <int>a1;
	cout<<a1.func(3,2);
	cout<<a1.func(3.0,2.0);
	return 0;
}

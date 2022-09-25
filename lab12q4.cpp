#include<iostream>
using namespace std;
template<typename T>
class container{
	T data;
	public:
		container(T a)
		{
			data=a;
		}
		T increase()
		{
			data++;
			return data;
		}
};
template<>
class container<char>{
	char ch;
	public:
		container(char c)
		{
			ch=c;
		}
		char upercaser()
		{
			ch++;
			return ch;
		}
};
int main()
{
	container<int>iobj(7);
	container<char>cobj('A');
	cout<<iobj.increase()<<endl;
	cout<<cobj.upercaser()<<endl;
	return 0;
}

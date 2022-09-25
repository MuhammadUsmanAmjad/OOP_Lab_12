#include<iostream>
using namespace std;
template<class T>
class pair
{
	T a,b;
	public:
		pair(T n,T m)
		{
			a=n;
			b=m;
		}
T getMax(T a,T b)
{
	if(a>b)
	return a;
	else
	return b;
}
T getMin(T a,T b)
{
	if(a<b)
	return a;
	else
	return b;
};
int main()
{
pair <double> myobject (1.012,1.01234);
cout<< myobject.getmax();
return 0;
}

#include<iostream>
using namespace std;
template<typename T>
class Pair
{
	T a,b;
	public:
		Pair<T>(T n,T m)
		{
			a=n;
			b=m;
		}
T getMax()
{
	if(a>b)
	return a;
	else
	return b;
}
T getMin()
{
	if(a<b)
	return a;
	else
	return b;
}
};
template<Pair<typename T>,int  N>
class  sequence {
	T memblock[N];
	public:
		void setmember(int x,Pair<T>&obj)
		{
			T value=obj.getMin();
			memblock[x]=value;
		}
		T getmember(int x)
		{
			return memblock[x];
		}
};
int main()
{
  Pair<double>y (2.23,3.45);
  sequence<Pair<double>,5>myPairs;
  myPairs.setmember (0,y);
  cout <<myPairs.getmember(0) <<endl;
}

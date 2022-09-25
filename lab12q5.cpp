#include<iostream>
using namespace std;
template<typename T,int N>
class  sequence {
	T memblock[N];
	public:
		sequence(int x,T value)
		{
			memblock[x]=value;
		}
		T getmember(int x)
		{
			return memblock[x];
		}
};
int main()
{
  sequence<int,5>myints;
  sequence<double,5>myfloats;
  myints.setmember (0,100);
  myfloats.setmember (3,3.1416);
  cout << myints.getmember(0) <<endl;
  cout << myfloats.getmember(3) <<endl ;
  return 0;
}

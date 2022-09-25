#include<iostream>
using namespace std;
template<typename T,typename T1>
T getMax(T a,T1 b)
{
	if(a>b)
	return a;
	else
	return b;
}
template<typename T,typename T1>
T getMin(T a,T1 b)
{
	if(a<b)
	return a;
	else
	return b;
}
int main()
{
  char i='Z';
  int j=6, k;
  long l=10, m=5, n;
  k=getMax<int,long>(i,m); 
  n=getMin<int,char>(j,l);
   cout << k <<endl;
   cout << n << endl;
   return 0;
}

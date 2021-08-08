#include<iostream>
using namespace std;
class sample
{
	public:int a,b;
	public:sample() {a=10,b=20;}
	void putdata()
	{
		int c=a+b;
		cout<<"c="<<c<<endl;
	}
	sample operator+(sample &r)
	{
		sample sum;
		sum.a=a+r.a;
		sum.b=b+r.b;
		return sum;
	}
	
};
int main()
{
	sample obj1;
	sample obj2;
	sample obj3=obj1+obj2;
	cout<<obj3.a<<endl;
	cout<<obj3.b<<endl;
}


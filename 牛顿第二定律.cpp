#include<iostream>
using namespace std;

int main()
{
	while (1)
	{
		float t1, t2, v1, v2, a, a_, m_, m, s, l,v__v;
		s = 70.00;
		l = 5.00;
		cout << "t1t2" << endl;
		cin >> t1;
		cout << "t1=" << t1 << endl;
		cin >> t2;
		cout << "t2=" << t2 << endl;
		v1 = l / t1 * 1000;
		v2 = l / t2 * 1000;
		v__v = (v2 * v2) - (v1 * v1);
		a = ((v2 * v2) - (v1 * v1)) / s / 2;
		cout << "v1=" << v1 << '\n' << "v2=" << v2 << '\n'<<v__v<<'\n' << "a=" << a << '\n' << endl;
	}
}
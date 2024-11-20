#include<iostream>
using namespace std;

/*
authorname：Oregano;
*/


int main()
{
	while (1)
	{
		float	T0, T1, l, p, p0, D, g;//已知量

		float	d, t, d1, d2, n;//未知量
		T0 = 21.20, T1 = 22.00, l = 25.70, p = 7.670, p0 = 0.958, D = 8.560, g = 980.1;//输入实验前测得数据,g要×100
		
		/*
		cout << "d1" << endl;
		cin >> d1;
		cout << "d1=" << d1 << endl;//左
		cout << "d2" << endl;
		cin >> d2;
		cout << "d2=" << d2 << endl;//右

		d = d1 - d2;
		*/

		

		cout << "d" << endl;
		cin >> d;
		//d = d / 10;
		cout << "d=" << d << endl;
		//长度测量值的输入

		cout << "t" << endl;
		cin >> t;
		cout << "t=" << t << endl;

		//时间测量值输入

		n = ((p - p0) * g * d * d * t) / (18 * l * (1 + 2.4 * d / D));

		cout << "d的值" << endl;

		cout << "d=" << endl;

		cout << "结果" << endl;

		cout << "n=" << n << endl;
	}
}
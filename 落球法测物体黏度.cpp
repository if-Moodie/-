#include<iostream>
using namespace std;

/*
authorname��Oregano;
*/


int main()
{
	while (1)
	{
		float	T0, T1, l, p, p0, D, g;//��֪��

		float	d, t, d1, d2, n;//δ֪��
		T0 = 21.20, T1 = 22.00, l = 25.70, p = 7.670, p0 = 0.958, D = 8.560, g = 980.1;//����ʵ��ǰ�������,gҪ��100
		
		/*
		cout << "d1" << endl;
		cin >> d1;
		cout << "d1=" << d1 << endl;//��
		cout << "d2" << endl;
		cin >> d2;
		cout << "d2=" << d2 << endl;//��

		d = d1 - d2;
		*/

		

		cout << "d" << endl;
		cin >> d;
		//d = d / 10;
		cout << "d=" << d << endl;
		//���Ȳ���ֵ������

		cout << "t" << endl;
		cin >> t;
		cout << "t=" << t << endl;

		//ʱ�����ֵ����

		n = ((p - p0) * g * d * d * t) / (18 * l * (1 + 2.4 * d / D));

		cout << "d��ֵ" << endl;

		cout << "d=" << endl;

		cout << "���" << endl;

		cout << "n=" << n << endl;
	}
}
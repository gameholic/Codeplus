#include "Problem_2609.h"


int Problem_2609::getGCD(int a, int b)
{
	int gcd = 0;

	if (b == 0)
	{
		return a;
	}
	else
	{
		return getGCD(b, a % b);
	}
}
//int main()
//{
//	int  a, b;
//	int gcd, lcm;
//	Problem_2609 p;
//	cin >> a>> b;
//	gcd = p.getGCD(a, b);
//	lcm = (a * b) / gcd;
//	cout << gcd << endl << lcm;
//
//}
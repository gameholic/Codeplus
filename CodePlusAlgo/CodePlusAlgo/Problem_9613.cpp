#include "Problem_9613.h"

//
//int main()
//{
//	stdheader stdh;
//	int testCases, caseCount;
//	int casearray[100], GCD[100];
//	int sum;	
//
//	cout << "Enter test cases" << endl;
//	cin >> testCases;
//	if (testCases < 1 || testCases >100)
//		exit(0);
//
//	for (int i = 0; i < testCases; i++)
//	{
//		sum = 0;
//		cout << "Enter case count" << endl;
//		cin >> caseCount;
//		if (caseCount > 1 && caseCount<=100)
//		{
//			cout << "case number is " << caseCount << endl;
//			for (int j = 0; j < caseCount; j++)
//			{
//				cin >> casearray[j];
//			}
//		
//			for (int x = 0; x < caseCount; x++)
//			{
//				for (int y = x + 1; y < caseCount; y++)
//				{
//					cout << "GCD of (" << casearray[x] << ") and (" << casearray[y] << ")";
//					GCD[x] = stdh.getGCD(casearray[x], casearray[y]);
//					sum = GCD[x] + sum;
//					cout << " is " << GCD[x] << endl;
//				}
//
//			}
//			cout << "GCD sum is " << sum << endl;
//
//		}
//
//	}
//	cout << "end";
//
//}
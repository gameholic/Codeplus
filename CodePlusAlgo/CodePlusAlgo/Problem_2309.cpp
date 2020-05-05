#include "Problem_2309.h"

//int n = 9;
//
//int compar(const void* p1, const void* p2) {
//
//	return (*(int*)p1 - *(int*)p2);
//}
//
//
//
//int main()
//{
//	int height[9];
//
//	int overallH = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> height[i];	// get dwarfs height.
//		overallH = overallH + height[i];
//	}
//	cout << "over all height is " << overallH << endl;
//
//
//	//sort array;
//	qsort(height, 9, sizeof(int), compar);
//	cout << "Sorted array: ";
//	for (int i = 0; i < 9; i++)
//	{
//		cout << height[i]<<" ";
//		
//	}
//	cout << "\n";
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1; j < n ; j++)
//		{
//			//get sum of 7 numbers except height[i] and height[j];
//			int check = overallH - height[i] - height[j];
//			if (check == 100)
//			{
//				//height[i] and height [j] is witch's person
//				for (int k = 0; k < n; k++)
//				{
//					if (i == k || j == k) continue;
//					cout << height[k] << endl;;
//
//				}
//				return 0;						
//			}
//		}
//	}
//
//	return 0;
//}
//

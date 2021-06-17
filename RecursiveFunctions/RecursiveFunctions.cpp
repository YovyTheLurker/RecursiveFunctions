// RecursiveFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Upgrade: calculate factorial of a number using recursion.

#include <iostream>
using namespace std;

int recursiveSum(int m, int n) {//you must always have a base case in order to break the recursion or you'll get an infine loop
	if (m == n)
		return m;
	return m + recursiveSum(m + 1, n);
}

int main()
{
	//Sum numbers between m-n
	int m = 2, n = 4;
	cout << "Sum = " << recursiveSum(m, n);

	// int sum = 0;
	// for (int i = m; i <= n; i++) {
	// 	sum += i;
	// 
	// }
	// cout << "sum= " << sum;


	system("pause>0");
}



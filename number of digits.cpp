// Program to find first and last
// digits of a number
#include <bits/stdc++.h>
using namespace std;

// Find the first digit
int firstDigit(int n)
{
	// Find total number of digits - 1
	int digits = (int)log10(n);

	// Find first digit
	n = (int)(n / pow(10, digits));

	// Return first digit
	return n;
}

// Find the last digit
int lastDigit(int n)
{
	// return the last digit
	return (n % 10);
}

// Driver program
int main()
{
	int n = 98562;
	cout << firstDigit(n) << " "
		<< lastDigit(n) << endl;
	return 0;
}

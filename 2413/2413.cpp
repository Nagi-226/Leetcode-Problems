#include <iostream>
using namespace std;
class Solution
{
public:
	int smallestEvenMultiple(int n)
	{
		return n % 2 ? 2 * n : n;
	}
};
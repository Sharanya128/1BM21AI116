
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c)
{
	if (n == 0)
    {
		return;
	}
	towerOfHanoi(n - 1, a, c, b);
	cout << "Move disk " << n << " from disc " << a << " to disc " << b << endl;
	towerOfHanoi(n - 1, c, b, a);
}
int main()
{
	int N = 3;
	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;
}


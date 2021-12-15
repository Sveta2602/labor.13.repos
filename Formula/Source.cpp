#include <iostream>
#include <cmath>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "x_p = ";
	cin >> x_p;
	cout << "x_k = ";
	cin >> x_k;
	cout << "dx = ";
	cin >> dx;
	cout << "e = ";
	cin >> e;
	cout << endl;

	x = x_p;
	if (x > -1)
	{
		while (x <= x_k)
		{
			sum();
			cout << x << " " << s << "" << log(x + 1) << " " << n << endl;
			x += dx;
		}
		cout << x_p - x;
	}

	return 0;
}
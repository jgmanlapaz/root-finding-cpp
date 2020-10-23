/*C++ Code for Newton-Raphson Method*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double f(double x)
{
	return 2*x - cos(x);
}

double f_prime(double x)
{
	return 2 + sin(x);
}

double newton(double x_in, int N)
{
	double x_out;
	int n = 1;

	while (n < N)
	{
		x_out = x_in - f(x_in)/f_prime(x_in);
		if (f(x_out) == 0 || abs(x_out - x_in) < 0)
		{
			break;
		}
		x_in = x_out;
		n +=1;
	}
	return x_out;
}

int main()
{
	cout << newton(1,6) <<endl;
	return 0;
}
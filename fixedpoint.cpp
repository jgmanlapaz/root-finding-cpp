/*C++ Code for Fixed Point Iteration*/
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

double g(double x)
{
	return (5.00*x*x - 1.01*x - 1.88)/(x*x);
}

double fixed_pt(double x_zero, int N)
{
	int n = 1;
	double x_one, diff;
	while (n < N)
	{
		x_one = g(x_zero);
		diff = abs(x_one - x_zero);
		if (diff < 0)
		{
			cout << x_zero <<endl;
		}
		x_zero = x_one;
		n += 1;
	}
	return x_one;
}

int main(){
    cout << fixed_pt(5.0, 10) <<endl;
 	return 0;
}
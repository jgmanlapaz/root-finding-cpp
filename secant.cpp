/*C++ Code for Secant Method*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double func(double x)
{
    return cos(x) - x;
}

double secant_method(double x_b, double x_n, double eps, int max_iterations)
{
    int iterations = 1;
    double x_new = 0.0;
    while (iterations <= max_iterations)
    {
        x_new =  x_n - (func(x_n) * (x_n - x_b) / (func(x_n) - func(x_b)));

        if (func(x_new) == 0.0 || abs(x_new - x_n) < eps)
        {
        	break;
        }
        x_b = x_n;
        x_n = x_new;
        iterations = iterations + 1;
    }
    return x_new;
}

int main()
{
    cout << secant_method(0.5, 1, 0.0001, 20) <<endl;
    return 0;
}

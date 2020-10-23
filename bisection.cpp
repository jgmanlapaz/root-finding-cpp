/*C++ Code for Bisection Method*/ 
#include<iostream>
#include <cstdlib>
using namespace std;

double func(double x)
{
    return x*x*x*x*x - 2*x*x*x + 5*x - 2;
}

double bisection(double a, double b, double eps, int max_iterations)
{
     double c = 0;
    int iterations = 1;
    while (iterations <= max_iterations || b-a >= eps)
    {
        // Find middle point
        c = (a+b)/2;

        // Check if middle point is root
        if (func(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
        iterations = iterations + 1;
    }
    return c;
}

int main()
{
    cout << bisection(0, 2, 0.0001, 20) <<endl;
    return 0;
}
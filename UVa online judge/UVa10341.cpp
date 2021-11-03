#include<bits/stdc++.h>
using namespace std;

#define EPS 1e-8

int p, q, r, s, t, u;

double equ(double n)
{
	return p * exp(-n) + q * sin(n) + r * cos(n) + s * tan(n) + t * n * n + u;
}

double bisection()
{
	double lo = 0, hi = 1;
	while (lo + EPS < hi)
	{
		double x = (lo + hi) / 2;
		if(equ(x) * equ(lo) <= 0)
			hi = x;
		else
			lo = x;
	}
	return lo;
}

int main() 
{
	while (cin >> p >> q >> r >> s >> t >> u)
	{
		if(equ(0) * equ(1) > 0)
			cout << "No solution" << "\n";
		else{
			printf("%.4f\n", bisection());
		}
	}
	return 0;
}

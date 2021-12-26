#include<bits/stdc++.h>
using namespace std;

struct Item
{
	int value, weight;

	Item(int value, int weight) : value(value), weight(weight)
	{}
};

bool cmp(struct Item a, struct Item b)
{
	double r1 = (double)a.value / a.weight;
	double r2 = (double)b.value / b.weight;
	return r1 > r2;
}

double fractionKnapsack(int W, struct Item arr[], int n)
{
	sort(arr, arr+n, cmp);

	int curr_w = 0;
	double finalvalue = 0.0;

	for(int i = 0; i < n; i++)
	{
		if(curr_w + arr[i].weight <= W)
		{
			curr_w += arr[i].weight;
			finalvalue += arr[i].value;
		}

		else
		{
			int remain = W - curr_w;
			finalvalue += arr[i].value * ((double) remain / arr[i].weight);
			break;
		}
	}
	return finalvalue;
}

int main()
{
	int W = 50;
	Item arr[] = {{60, 10}, {100, 20}, {120, 30}};

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << fractionKnapsack(W, arr, n) << endl;
	return 0;
}

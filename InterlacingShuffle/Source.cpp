#include <iostream>
#include <vector>

using namespace std;

int f(int n2, int a)
{
	int n = n2 / 2;
	if (a % 2 == 0) return n + a / 2;
	return (a + 1) / 2;
}

int main()
{
	int n = 0;
	cin >> n;
	//n *= 2; //uncomment if want to input n instead of 2*n (2*n is the number of cards in the deck)
	while (n > 0 && n%2 == 0)
	{
		n;
		vector<bool> seen;
		seen.resize(n + 1, false);
		vector<vector<int>> cycles;

		int a = 1;
		while (a <= n)
		{
			vector<int> cycle;
			cycle.push_back(a);
			seen.at(a) = true;
			while (f(n, a) != cycle.at(0))
			{
				cycle.push_back(a = f(n, a));
				seen.at(a) = true;
			}
			cycles.push_back(cycle);

			a = 1;
			while ((a <= n) && seen.at(a)) a++;
		}
		for each (vector<int> cycle in cycles)
		{
			cout << "(" << cycle.at(0);
			for (size_t i = 1; i < cycle.size(); i++)
			{
				cout << " " << cycle.at(i);
			}
			cout << ")";
		}
		cout << endl;
		cin >> n;
		//n *= 2; //uncomment if want to input n instead of 2*n (2*n is the number of cards in the deck)
	}
	return 0;
}
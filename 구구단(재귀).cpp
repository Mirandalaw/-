#include<iostream>
#include<vector>

using namespace std;

int a, b;
int multiplication(int current)
{
	if (current > b)
	{
		return 0;
	}
	for (int mul_number = 1; mul_number <= 9; ++mul_number)
	{
		cout << current << "*" << mul_number << "=" << current * mul_number << "    ";
	}cout << endl;
	multiplication(++current);
	
}

int main()
{
	cin >> a >> b;
	multiplication(a);
	return 0;
}
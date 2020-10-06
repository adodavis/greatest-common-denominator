// Recursively calculates the greatest common divisor of two user-entered integers

#include <iostream>
using namespace std;

int gcd(int, int);
int gcd(int, int, int);

int main()
{
	int num1, num2;

	cout << "Enter two space-separated integers: ";
	cin >> num1 >> num2;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(200, '\n');
		cout << "Enter two space-separated integers: ";
		cin >> num1 >> num2;
	}

	cout << "Greatest common divisor: " << gcd(num1, num2) << "\n";

	system("pause");
	return 0;
}

int gcd(int n1, int n2)
{
	if (n1 > n2)
		return gcd(n1, n2, n1);
	else
		return gcd(n1, n2, n2);
}

int gcd(int n1, int n2, int n3)
{
	if (n1 % n3 == 0 && n2 % n3 == 0)
		return n3;
	else
		return gcd(n1, n2, (n3 - 1));
}

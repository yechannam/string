
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string a,b,c,d;

	cin >> a >> b >> c >> d;
	
	long long num1 = stoi(a) * pow(10, b.size()) + stoi(b);
	long long num2 = stoi(c) * pow(10, d.size()) + stoi(d);
	
	cout << num1 + num2;
	return (0);
}
	

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	string arr[1000];

	cin >> s;
	int len = s.size();
	for (int i = 0; i < len; i++)
		arr[i] = s.substr(i);
	sort(arr, arr + len);
	for (int i = 0; i < len; i++)
		cout << arr[i] << '\n';

	return (0);
}
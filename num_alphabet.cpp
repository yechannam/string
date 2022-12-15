#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	string	s;
	int		i = 0;
	int		arr[26];
	
	for (int j = 0; j < 26; j++)
		arr[j] = 0;
	cin >> s;
	while (s[i])
	{
		arr[s[i] - 97]++;
		i++;
	}
	for (int j = 0; j < 25; j++)
		cout << arr[j] << ' ';
	cout << arr[25];
	return (0);
}

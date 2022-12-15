#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int arr[26];

	for (int j = 0; j < 26; j++)
		arr[j] = -1;
	cin >> s;
	int i = 0;
	while (s[i])
	{
		if (arr[s[i] - 'a'] == -1)
			arr[s[i] - 'a'] = i;
		i++;
	}
	i = 0;
	while (i < 25)
		cout << arr[i++] << ' ';
	cout << arr[25];
	return (0);
}

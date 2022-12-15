#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int arr[4];
	int i = 0;
	for (int j = 0; j < 4; j++)
		arr[j] = 0;
	while (1)
	{
		i = 0;
		cin >> s;
		while (s[i])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				arr[0]++;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				arr[1]++;
			else if (s[i] >= '0' && s[i] <= '9')
				arr[2]++;
			else if (s[i] == ' ')
				arr[3]++;
			i++;
		}
		cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << ' ' << arr[3];
	}
	return (0);
}
	

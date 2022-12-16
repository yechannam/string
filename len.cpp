#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    while (s[++i])
        ;
    cout << i;
    return (0);
}
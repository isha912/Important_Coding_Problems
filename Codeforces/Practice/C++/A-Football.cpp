#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int danger = 1;

    cin >> s;

    for (int i = 0; i < s.length() - 1; ++i)
    {
        if(danger >= 7)
            break;

        if(s[i] == s[i+1]) {
            danger++;
        }else{
            danger = 1;
        }
    }

    if(danger >= 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;

}

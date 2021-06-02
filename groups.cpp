#include <iostream>
using namespace std;

int main()
{
    int t, sum = 0;
    cin >> t;
    while (t--)
    {
        string s;

        cin >> s;
        int n = s.length();
        for (int y = 0; y < (n - 1); y++)
        {

            if (s[y] == 1 && s[y + 1] == 1)
            {
                sum++;
            }
            if (s[y] == 1 && s[y + 1] == 0)
            {
                sum++;
            }
            if (s[y] == 0 && s[y + 1] == 1)
            {
                sum++;
            }
            cout << sum << endl;
            /*if (s[y]==0 && s[y+1]==0){
                
            }*/
        }
    }
    // your code goes here
    return 0;
}

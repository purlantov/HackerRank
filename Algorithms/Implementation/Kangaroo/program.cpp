#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    // Complete this function
    int counter = 0;
    while(counter <= 10000)
    {
        if(x1 == x2)
        {
            return "YES";
        }

        x1+=v1;
        x2+=v2;
        counter++;
    }

    return "NO";
}

int main()
{
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}


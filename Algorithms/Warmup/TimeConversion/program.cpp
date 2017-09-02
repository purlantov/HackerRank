#include <bits/stdc++.h>

using namespace std;

static string timeConversion(string s)
{
    // Complete this function
    //
    string text;
    int hour;
    if(s[8] == 'P')
    {
        hour = getHour(s);
    }
    
    

}

static int getHour(string s)
{
    int hour = (s[0] + s[1])-'0';

    switch(hour)
    {
    case 1:
        return 13;
        break;
    case 2:
        return 14;
        break;
    case 3:
        return 15;
        break;
    case 4:
        return 16;
        break;
    case 5:
        return 17;
        break;
    case 6:
        return 18;
        break;
    case 7:
        return 19;
        break;
    case 8:
        return 20;
        break;
    case 9:
        return 21;
        break;
    case 10:
        return 22;
        break;
    case 11:
        return 23;
        break;
    case 12:
        return 0;
        break;
    }
}



int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}

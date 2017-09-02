#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    int s;
    int t;
    cin >> s >> t;

    int a;
    int b;
    cin >> a >> b;

    int m;
    int n;
    cin >> m >> n;

    int position = 0;
    int appleCounter=0;
    int orangeCounter=0;

    vector<int> apple(m);
    for(int i = 0; i < m; i++) {
        cin >> apple[i];
        position=a+apple[i];
        if(position>=s && position<=t)
        {
            appleCounter++;
        }
    }

    vector<int> orange(n);
    for(int i = 0; i < n; i++) {
        cin >> orange[i];
        position=b+orange[i];
        if(position>=s && position<=t)
        {
            orangeCounter++;
        }
    }
    
    cout<<appleCounter<<endl;
    cout<<orangeCounter<<endl;

    return 0;
}

#include <bits/stdc++.h>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2) {
    // Complete this function
    int resultA = 0;
    int resultB = 0;

    if(a0 > b0)
    {
        resultA++;
    }

    if (a0<b0)
    {
        resultB++;
    }

    if (a1>b1)
    {
        resultA++;
    }

    if(a1<b1)
    {
        resultB++;
    }

    if(a2>b2)
    {
        resultA++;
    }

    if(a2<b2)
    {
        resultB++;
    }

    vector <int> array = {resultA, resultB};
    return array;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}


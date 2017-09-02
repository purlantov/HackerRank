#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    int n;
    int sumL = 0;
    int sumR = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(i==j)
            {
                sumL+=a[i][j];
            }
            if(i+j==n-1)
            {
                sumR+=a[i][j];
            }
        }
    }
    int result = 0;
    if(sumL>sumR)
    {
        result = sumL-sumR;
    }
    else
    {
        result = sumR-sumL;
    }
    cout<<result;
    return 0;
}

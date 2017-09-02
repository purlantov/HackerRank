#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    double n;
    int positive = 0;
    int negative = 0;
    int zeroe = 0;

    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]<0)
        {
            negative++;
        }
        else if(arr[i]==0)
        {
            zeroe++;
        }
    }

    double positives = positive / n;
    double negatives = negative / n;
    double zeroes = zeroe / n;
    
    cout << fixed << setprecision(6);
    cout<<positives<<endl;
    cout<<negatives<<endl;
    cout<<zeroes<<endl;

    return 0;
}

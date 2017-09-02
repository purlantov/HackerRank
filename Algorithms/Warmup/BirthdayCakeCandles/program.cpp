#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar, int max) 
{
    // Complete this function
    int counter = 0;
    for(int i = 0; i<n;i++)
    {
        if(ar[i]==max)
            counter++;
    }
    
    return counter;
}

int main() {
    int n;
    int max = 0;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
       if(ar[ar_i]>max)
       {
            max = ar[ar_i];
       }
    }
    int result = birthdayCakeCandles(n, ar, max);
    cout << result << endl;
    return 0;
}

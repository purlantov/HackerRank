#include <bits/stdc++.h>

using namespace std;

int  main() 
{
    long max = 0;
    long min = 1000000000;

    vector<long> arr(5);
    for(int i = 0; i < 5; i++){
       cin >> arr[i];
    }

    long sum = 0;
    for(long j = 0; j < 5; j++)
    {
        sum+=arr[j];
        
        if(arr[j] > max)
        {
            max = arr[j];
        }

        if(arr[j] < min)
        {
            min = arr[j];
        }
    }
    
    cout<<sum-max;
    cout<<" ";
    cout<<sum-min;

    return 0;
}

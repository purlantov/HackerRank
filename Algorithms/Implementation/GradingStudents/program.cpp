#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades) {
    // Complete this function
    int target = 5;
    for(size_t i = 0; i < grades.size(); i++)
    {
        size_t f = grades[i]/10;
        int s = grades[i]%10;
        if(s>target && s-targe<=3)
        {
            // round to 
        }
        if(s<target && target-s<=3)
        {
            // round to 
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);

    for(int i = 0; i < n; i++)
    {
        cin >> grades[i];
    }

    vector < int > result = solve(grades);

    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }

    cout << endl;


    return 0;
}



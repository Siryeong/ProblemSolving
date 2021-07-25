#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cout << fixed; cout.precision(3);

    int C;
    cin >> C;
    while (C--)
    {
        int N;
        float sum=0, t=0;
        vector<float> v;
        cin >> N;
        for (int i = 0; i < N; i++){
            cin >> t;
            v.push_back(t);
            sum += t;
        }
        float avg = sum / (float)N;
        t = 0;
        for (int i = 0; i < N; i++)
            if (v[i] > avg) t += 1;
        
        cout << t / (float)N * 100 << "%\n";
    }

    return 0;
}
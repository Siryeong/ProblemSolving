#define LEFT -1.0
#define RIGHT 1.0
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

double get_bound(pair<int, int> v, int d, double dir){
    return v.first + dir * sqrt( d*d - v.second*v.second );
}

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);

    int n, d;
    cin >> n >> d;
    vector<pair<double, double> > vills(n);

    for(int i = 0; i < n; i++){
        pair<int, int> village;
        cin >> village.first >> village.second;
        vills[i] = make_pair(get_bound(village, d, LEFT), get_bound(village, d, RIGHT));
    }
    sort(vills.begin(), vills.end());

    double left_bound = -20000.0, right_bound = -20000.0;
    int result = 0;
    for(int i = 0; i < n; i++){
        if(left_bound < vills[i].first) left_bound = vills[i].first;
        if(vills[i].second < right_bound) right_bound = vills[i].second;
        if(right_bound < left_bound){
            right_bound = vills[i].second;
            result++;
        }
    }

    cout << result << "\n";

    return 0;
}
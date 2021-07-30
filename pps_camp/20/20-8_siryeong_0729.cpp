#include <bits/stdc++.h>
using namespace std;
#define ll long long

class person{
public:
    int m;
    int k;
    int r;
};

int main()
{
    int n;
    cin >> n;
    vector<person> vp(n);
    for(int i = 0; i < n; i++){
        cin >> vp[i].m >> vp[i].k;
        vp[i].r = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vp[i].m < vp[j].m && vp[i].k < vp[j].k){
                vp[i].r++; // 나보다 큰사람의 수
            }
        }
    }
    
    for(person p:vp)
        cout << p.r << " ";
    cout << "\n";

    
    return 0;
}
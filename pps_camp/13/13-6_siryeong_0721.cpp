#include <bits/stdc++.h>
using namespace std;
#define MIN(a, b) ((a) > (b) ? (b) : (a))

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, w;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    vector<int> B = A; // temp var
    sort(A.begin(), A.end());
    unordered_map<int,int> um;

    for(int i = 0; i < n; i++){ // graph
        um[A[i]] = B[i];
    }
    
    int sum=0;
    for(int i = 0; i < n; i++){
        if(um.find(A[i]) != um.end()){ // 삭제 안당했으면
            vector<int> vt;
            int st = A[i];
            while(um[st] != A[i]){ // 자기자신으로 돌아올때까지
                vt.push_back(st);
                st = um[st];
            }   vt.push_back(st);
            sort(vt.begin(), vt.end());
            int s1=0, s2=0;
            for(int j = 0; j < vt.size(); j++){
                s1 += (A[0] + vt[j]);
                um.erase(vt[j]);
            }   s1 += (A[0] + vt[0]);
            for(int j = 1; j < vt.size(); j++)
                s2 += (vt[0] + vt[j]);
            sum += MIN(s1, s2);
        }
    }
    cout << sum << "\n";

    return 0;
}
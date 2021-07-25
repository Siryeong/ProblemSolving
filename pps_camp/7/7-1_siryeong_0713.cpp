#include <bits/stdc++.h>
using namespace std;

class user
{
    public:
        int i;
        int age;
        string name;

};

bool comp(user a, user b)
{
    if(a.age==b.age)
        return a.i < b.i;
    return a.age < b.age;
}

int main()
{
    vector<user> v(100001);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i].age >> v[i].name;
        v[i].i = i;
    }
    sort(v.begin(), v.begin()+n, comp);

    for(int i = 0; i < n; i++)
        cout << v[i].age << " " << v[i].name << "\n";


    return 0;
}
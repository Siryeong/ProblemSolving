#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > group(8001);
bool checked[8001] = {0,};

void check(int p){
  if(checked[p]) return;
  checked[p] = true;
  for(int i = 0; i < group[p].size(); i++)
    check(group[p][i]);
}

int main()
{
  int n;
  cin >> n;

  int review[8001], test[8001];
  for(int i = 0; i < n; i++)
    cin >> review[i] >> test[i];

  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if((review[i] > review[j] && test[i] < test[j]) 
      || (review[i] < review[j] && test[i] > test[j]) ){
          group[i].push_back(j);
          group[j].push_back(i);
        }
    }
  }

  int result = 0;
  for(int i = 0; i < n; i++){
    if(!checked[i]){
        check(i);
        result++;
    }
  }
  cout << result << "\n";

  return 0;
}
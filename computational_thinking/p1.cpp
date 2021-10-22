#include <iostream>
#include <string>
using namespace std;

int main()
{
  long long nine[10] = {1,};
  for(int i = 1; i <= 9; i++)
    nine[i] = nine[i-1]*9;
  
  string num;
  cin >> num;

  for(int i = 0; i < num.length(); i++){
    if(num[i] > '4') num[i]--;
  }

  long long result = 0;
  int i = num.length()-1, j = 0;
  while(i >= 0){
    result += (num[j]-'0')*nine[i];
    i--; j++;
  }

  cout << result << "\n";

  return 0;
}
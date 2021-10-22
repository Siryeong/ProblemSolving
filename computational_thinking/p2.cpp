#include <iostream>
#define ll long long
#define MAX(a,b) (a) > (b) ? (a) : (b)
using namespace std;

typedef struct _building{
  int g;
  int x;
} Building;

/**
 * 
 * My Little Quick Sort
 * Copyright by Wikipedia https://ko.wikipedia.org/wiki/%ED%80%B5_%EC%A0%95%EB%A0%AC
 * 
 */

void swap(Building &a, Building &b){
    Building t = a; a = b; b = t;
}

void quickSort(Building A[], int low, int high) {
    if(low >= high) return;

    int i = low, j = low;
    Building&pivot = A[high];
    for (; j < high; ++j) {
        if ( A[j].x < pivot.x)
            swap(A[i++], A[j]);
    }
    swap(A[i], pivot);

    quickSort(A, low, i-1);
    quickSort(A, i+1, high);
}

/**
 * 
 * Quick Sort End
 * 
 */

int main(){
  ios::sync_with_stdio(0x0); cin.tie(0x0);

  Building * bldng = new Building[10000001];
  ll result = 0;

  ll n, k;
  cin >> n >> k;

  for(int i = 0; i < n; i++)
    cin >> bldng[i].g >> bldng[i].x;
  quickSort(bldng, 0, n-1);

  ll front = 0;
  ll sub_sum = 0;
  for(int i = 0; i < n; i++){
    sub_sum += bldng[i].g;
    while(bldng[front].x < bldng[i].x - 2*k ){
      sub_sum -= bldng[front].g;
      front++;
    }
    result = MAX(result, sub_sum);
  }

  cout << result << "\n";


  return 0;
}
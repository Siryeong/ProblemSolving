#define MAX_CARDS 50001
#include <iostream>
#include <algorithm>
using namespace std;

int search(int p_cards[], int card, int &k){
    if(k == 0 || p_cards[k-1] < card){
        p_cards[k++] = card;
        return k-1;
    }

    int start = 0, end = k;
    while(start <= end){
        int mid = (start + end)/2;
        if(p_cards[mid] == card) return mid;
        if(p_cards[mid] < card) start = mid + 1;
        if(card < p_cards[mid]) end = mid - 1;
    }
    p_cards[start] = card;
    return start;
}

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);

    int n;
    cin >> n;
    
    int d_cards[MAX_CARDS], p_cards[MAX_CARDS];
    int asc[MAX_CARDS], decs[MAX_CARDS];

    for(int cur = 0, k = 0; cur < n; cur++){
        cin >> d_cards[cur];
        asc[cur] = search(p_cards, d_cards[cur], k);
    }
    for(int cur = n-1, k = 0; cur >= 0; cur--)
        decs[cur] = search(p_cards, d_cards[cur], k);
    
    int result = 1;
    for(int i = 0; i < n; i++)
        result = max(result, asc[i] + decs[i] + 1);
    
    cout << result << "\n";
    
    return 0;
}
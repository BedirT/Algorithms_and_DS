/*
 Given nums = [-2, 0, 3, -5, 2, -1]
 
 sumRange(0, 2) -> 1
 sumRange(2, 5) -> -1
 sumRange(0, 5) -> -3
*/

#include<iostream>
using namespace std;
int arr[10001];

int RMQ(int L, int R){
    
    int ans = 0;
    
    while (L <= R) {
        if (L % 2 == 1) {
            ans += arr[L];
        }
        if (R % 2 == 0) {
            ans += arr[R];
        }
        L = (L+1)/2;
        R = (R-1)/2;
    }
    
    return ans;
    
}

void swap (int * a, int *b){
    int hold = *a;
    *a = *b;
    *b = hold;
}

void update (int i, int x){
    
    int diff = x - arr[i];
    while(i >= 1){
        arr[i] += diff;
        i /= 2;
    }
}

int main () {
    
    int n, sz = 1, fIdx, lIdx;
    cin >> n;
    
    while(sz < n)
        sz *= 2;
    
    for (int i = sz; i <= sz+n-1 ; ++i)
        cin >> arr[i];
    
    for (int i = sz-1; i >= 1; --i)
        arr[i] = arr[2*i] + arr[2*i+1];
    
    int choice = 1;
    while (choice) {
        
        cin >> choice; // 0 for exit, 1 for update, 2 for sum's
        if(choice == 0) break;
        else if(choice == 1){
            cin >> fIdx >> lIdx;
            update(fIdx + sz, lIdx);
        }
        else if(choice == 2){
            cin >> fIdx >> lIdx;
            if(fIdx > lIdx) swap(fIdx, lIdx);
            cout << RMQ(fIdx + sz, lIdx +sz) << endl;
        }
        else;
        
    }
    
}
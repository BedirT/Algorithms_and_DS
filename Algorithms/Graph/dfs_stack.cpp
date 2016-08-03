#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int main () {
    
    int n, m, a, b, k, u, s;
    cin >> n >> m;
    
    int arr[n+1][n+1], d[n+1];
    bool was[n+1];
    stack<int> st;
    
    memset(was, false, sizeof was);
    memset(arr, -1, sizeof arr);
    
    for (int i = 0; i < n ; ++i) {
        cin >> a >> b >> k;
        arr[a][b] = arr[b][a] = k;
    }
    
    cin >> s;
    
    st.push(s);
    was[s] = true;
    int j = 0;
    d[j++] = s;
    
    while (!st.empty()) {
        
        int u = st.top();
        
        for (int i = 0; i < n; ++i)
            if(arr[u][i] != -1 && !was[i]){
                st.push(i);
                d[j++] = i;
                was[i] = true;
                break;
            }
        
        if(u == st.top())
            st.pop();
        
    }
    
    for (int i = 0; i < n; ++i) {
        cout << d[i] << " ";
    }
    
}
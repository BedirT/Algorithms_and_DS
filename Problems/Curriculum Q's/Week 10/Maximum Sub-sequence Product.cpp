/*
 Solution for UVa 787 - Maximum Sub-sequence Product
 This problem is easier to solve with Java, because of the bounds and multiplication BigInteger class will help a lot. Soon I will post the Java solution. This one is just for showing the right usage of the algorithm, the results will be correct for small numbers.   
 */
#include<vector>
#include<iostream>
using namespace std;

int kadane(vector<int> arr){
    vector<int> minus;
    minus.push_back(1);
    minus.push_back(arr[0]);
    int gmx = arr[0], cmx = arr[0]; // gmx = general max, cmx = current max
    for (int i = 1; i < arr.size(); ++i) {
        if(arr[i] < 0){
            minus.push_back(arr[i]);
            if(minus.size() == 3)
                cmx = (cmx * arr[i]);
            else
                cmx = (cmx * arr[i])/minus[minus.size()-3];
        }else
            cmx = max(arr[i], cmx*arr[i]);
        //cout << cmx << endl;
        if(cmx >= gmx) gmx = cmx;
    }
    //for(int i = 0 ; i < minus.size(); ++i)
      //  cout << minus[i] << endl;
    minus.clear();
    return gmx;
}

int main () {
    
    int a;
    vector<int> vc;
    while (cin >> a){
        vc.push_back(a);
        if(a == -999999){
            vc.pop_back();
            cout << kadane(vc) << endl;
            vc.clear();
            continue;
        }
    }
    
}

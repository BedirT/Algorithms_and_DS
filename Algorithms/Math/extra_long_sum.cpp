// Summation 

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void extraLong (string str1, string str2) {
    
    int i;
    int * num1, *num2;
    int maxLen = (str1.size() > str2.size()) ? str1.size() : str2.size();
    if(str1.size() > str2.size()){
        num1 = new int[str1.size()], num2 = new int[str2.size()];
        for (i = 0; i < str1.size(); ++i) num1[i] = str1[str1.size()-i-1] - '0';
        for (i = 0; i < str2.size(); ++i) num2[i] = str2[str2.size()-i-1] - '0';
    }
    else{
        num1 = new int[str2.size()], num2 = new int[str1.size()];
        for (i = 0; i < str1.size(); ++i) num2[i] = str1[str1.size()-i-1] - '0';
        for (i = 0; i < str2.size(); ++i) num1[i] = str2[str2.size()-i-1] - '0';
    }
        
    int sum[maxLen+1];
    
    memset(sum, 0, sizeof(sum));
    
    for (i = 0; i < maxLen ; ++i) sum[i] = num1[i] + num2[i];
    
    for (i = 0; i <= maxLen ; ++i){
        sum[i+1] += sum[i]/10;
        sum[i] %= 10;
    }

    if (sum[maxLen] == 1) cout << "1";
    for (int i = 0; i < maxLen ; ++i)
        cout << sum[maxLen-i-1];
    cout << endl;
}

int main () {

    string a, b; // Both Long integers
    
    cin >> a >> b; // Both Long integers << inputted
    
    extraLong(a, b);
    
}

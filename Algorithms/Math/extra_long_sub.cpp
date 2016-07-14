// Subtruction

#include<iostream>
#include<string>

using namespace std;

void extraLong (string str1, string str2) {
    
    int i;
    int maxLen = (str1.size() > str2.size()) ? str1.size() : str2.size();
    int num1[str1.size()], num2[str2.size()], sub[maxLen];
    
    memset(num1, 0, sizeof(num1));
    memset(num2, 0, sizeof(num2));
    memset(sub, 0, sizeof(sub));
    
    for (i = 0; i < str1.size(); ++i) num1[i] = str1[str1.size()-i-1] - '0';
    for (i = 0; i < str2.size(); ++i) num2[i] = str2[str2.size()-i-1] - '0';
    
    for (i = 0; i < maxLen ; ++i) {
        if (num1[i] < num2[i]) {
            num1[i+1]--;
            num1[i] += 10;
        }
        sub[i] = num1[i] - num2[i];
    }
    
    for (int i = 0; i < str1.size() ; ++i)
        cout << sub[str1.size()-i-1];
    cout << endl;
}

int main () {

    string a, b; // Both Long integers
    
    cin >> a >> b; // Both Long integers << inputted
    // First one should be longer ...
    
    extraLong(a, b);
    
}
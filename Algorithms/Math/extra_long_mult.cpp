// Multiplication

#include<iostream>
#include<string>

using namespace std;

void extraLong (string str1, string str2) {
    
    int i, j;
    int maxLen = str1.size() + str2.size();
    int num1[str1.size()], num2[str2.size()], mul[maxLen+1];
    
    memset(mul , 0, sizeof(mul));
    
    for (i = 0; i < str1.size(); ++i) num1[i] = str1[i] - '0';
    for (i = 0; i < str2.size(); ++i) num2[i] = str2[i] - '0';
    
    for (i = 0; i < str2.size() ; ++i)
        for (j = 0; j < str1.size() ; ++j)
            mul[i+j] += num2[i] * num1[j];
    
    for (i = 0; i < maxLen+1 ; ++i){
        mul[i+1] += mul[i]/10;
        mul[i] %= 10;
    }
    
    for (int i = 0 ; i < maxLen ; ++i)
        cout << mul[i];
    cout << endl;
}

int main () {

    string a, b; // Both Long integers
    
    cin >> a >> b; // Both Long integers << inputted
    
    extraLong(a, b);
    
}
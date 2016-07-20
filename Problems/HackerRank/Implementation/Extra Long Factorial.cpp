// https://www.hackerrank.com/challenges/extra-long-factorials?h_r=internal-search
#include<iostream>
using namespace std;

int num[3], fact[200], sum[200];

int main ()
{
    int n, number, hand = 0;
    int bNum, bFact, bSum, i, j, x;
    
    cin >> n;
    
    bFact = 1;
    fact[0] = 1;
    for (number=2; number<=n; number++)
    {
        for (i=0,j=number;  j!=0;  num[i]=j%10,j/=10,i++);
        bNum = i;
        
        for (i=0; i<bNum; i++)
            for (j=0; j<bFact; j++)
                sum[i+j] += num[i]*fact[j];
        bSum = bNum+bFact-1;
        
        
        hand = 0;
        for (i=0; i<bSum; i++)
        {
            fact[i]=(sum[i]+hand)%10;
            hand = (sum[i]+hand)/10;
            sum[i]=0;
        }
        if (hand) fact[bSum++] = hand;
        bFact = bSum;
    }
    
    for (i=bFact-1; i>=0; i--)
        cout << fact[i];
    cout << endl;
    
    return 0;
}
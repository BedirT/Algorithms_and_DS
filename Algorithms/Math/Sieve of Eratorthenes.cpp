// sieve of eratorthenes

// Desc: Find the prime numbers from 1 - n
// where n is type 'long'.

#include <iostream>
#include <vector>

using namespace std;

// n -> max number that I will check
// marked -> bool arr, that I mark composite nums
// primes -> vector that contains primes from 2->n
void sieve(long n, bool * marked, vector<int> &primes){

	// O(n*sqrt(n)) - but much more faster in real time
	for (long i = 2; i <= n; ++i){ 	
	// we will check 2->n if they are already marked
		if (!marked[i]){
			// Checking if prime
			primes.push_back(i);
			for (long j = i*i; j <= n; j += i){
				marked[j] = true;
			}
		}
	}
}
void printVector(vector<int> vc) {
	for (int i = 0; i < vc.size(); ++i)
		cout << vc[i] << " ";
	cout << endl << endl;
}

int main() {
	long n;
	cin >> n;

	bool marked[n+1];
	memset(marked, false, sizeof marked);
	vector<int> primes;

	sieve(n, marked, primes);
	printVector(primes);
}

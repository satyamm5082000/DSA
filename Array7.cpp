#include <bits/stdc++.h>
using namespace std;

void solve ()
{
	// cout << "Enter Size of arrays" << endl;
	int n;
	cin >> n;

	int ar[n];
	// cout << "Enter element of array" << endl;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	//print Original Array
	// cout << "Original Array" << endl;
	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}

	cout << endl;

	int k = ar[n - 1];

	for (int i = n - 1; i > 0; i--) {
		ar[i] = ar[i - 1];
	}

	ar[0] = k;

	//print output array
	// cout<<"Output"<<endl;
	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}

	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen ("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen ("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;

	while (t--)
	{
		solve();
	}
}

/*
TC:- O(n)
Sc:- O(1)
*/

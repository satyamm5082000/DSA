#include <bits/stdc++.h>
using namespace std;

void solve ()
{
	// cout << "Enter Size of arrays" << endl;
	int n, k;
	cin >> n >> k;

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
	sort(ar, ar + n);

	//print output array
	// cout<<"Output"<<endl;
	cout << ((ar[n - 1] - k) - (ar[0] + k)) << endl;
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
TC:- O(nlog n)
Sc:- O(1)
*/

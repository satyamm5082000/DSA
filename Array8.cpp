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

	int s = INT_MIN, cur = 0;

	for (int i = 0; i < n; i++) {
		cur = cur + ar[i];
		s = max(s, cur);
		if (cur < 0)
			cur = 0;
	}

	//print output array
	// cout<<"Output"<<endl;
	cout << s << endl;
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

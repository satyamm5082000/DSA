#include <bits/stdc++.h>
using namespace std;

void solve ()
{
	// cout << "Enter Size of arrays" << endl;
	int n, m;
	cin >> n >> m;

	int ar[n];
	int br[m];
	// cout << "Enter element of array of 1" << endl;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	// cout << "Enter element of array of 2" << endl;
	for (int i = 0; i < m; i++) {
		cin >> br[i];
	}

	//print Original Array
	// cout << "Original Array of 1" << endl;
	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}

	cout << endl;

	// cout << "Original Array of 2" << endl;
	for (int i = 0; i < m; i++) {
		cout << br[i] << " ";
	}

	cout << endl;


	unordered_set<int> s;

	for (int i = 0; i < n; i++) {
		s.insert(ar[i]);
	}

	for (int i = 0; i < m; i++) {
		s.insert(br[i]);
	}

	//Output Array
	cout << "Union" << endl;
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}

	cout << endl;

	cout << "Intersection" << endl;
	int i = 0, j = 0;

	while (i < n && j < m) {
		if (ar[i] == br[j]) {
			cout << ar[i] << " ";
			i++;
			j++;
		}

		else if (ar[i] > br[j])
			j++;

		else
			i++;
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
TC:- O(n+m)
Sc:- O(n+m)
*/

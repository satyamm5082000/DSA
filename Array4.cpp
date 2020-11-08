#include <bits/stdc++.h>
using namespace std;

void solve ()
{
	cout << "Enter Size of array" << endl;
	int n;
	cin >> n;

	int ar[n];
	cout << "Enter element of array" << endl;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	//print Original Array
	cout << "Original Array" << endl;
	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}

	cout << endl;

	int l = 0, mid = 0, h = n - 1;

	while (mid <= h) {
		switch (ar[mid]) {
		case 0:
			swap(ar[l++], ar[mid++]);
			break;

		case 1:
			mid++;
			break;

		case 2:
			swap(ar[mid], ar[h--]);
			break;
		}
	}

	//Output Array
	cout << "Output" << endl;
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
using Dutch National Flag Algo
TC:- O(n)
*/

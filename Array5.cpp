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

	int i = 0, j = n - 1;

	while (i < j) {
		if (ar[i] < 0)
			i++;
		if (ar[j] > 0)
			j--;
		if (ar[i] > 0 && ar[j] < 0) {
			swap(ar[i], ar[j]);
			i++;
			j--;
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
	// cin >> t;

	while (t--)
	{
		solve();
	}
}

/*
using two pointer approach
--in this question order of element is not mandatory
  in this question
TC:- O(n)
*/

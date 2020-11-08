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
	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}

	cout << endl;

	int i = 0, j = n - 1;

	//two pointer approach to reverse array
	while (i < j) {
		swap(ar[i], ar[j]);
		i++;
		j--;
	}

	//print the final output
	for (int i = 0; i < n; ++i)
	{
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
		solve ();
	}
}

/* Input:
2
3
1 2 3
4
1 2 3 4
*/

/* Output:
Enter Size of array
Enter element of array
1 2 3 
3 2 1 
Enter Size of array
Enter element of array
1 2 3 4 
4 3 2 1 
*/

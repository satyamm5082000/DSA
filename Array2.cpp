#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve ()
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

	pair<int, int> p;

	if (n == 1) {
		p.first = p.second = ar[0];
		return p;
	}

	int i;

	if (n % 2 == 0) {
		if (ar[0] > ar[1]) {
			p.first = ar[0];
			p.second = ar[1];
		}
		else {
			p.first = ar[1];
			p.second = ar[0];
		}
		i = 2;
	}
	else {
		p.first = p.second = ar[0];
		i = 1;
	}

	for (; i < n - 1;) {
		if (ar[i] > ar[i + 1]) {
			if (ar[i] > p.first)
				p.first = ar[i];
			if (ar[i + 1] < p.second)
				p.second = ar[i + 1];
		}
		else {
			if (ar[i + 1] > p.first)
				p.first = ar[i + 1];
			if (ar[i] < p.second)
				p.second = ar[i];
		}
		i += 2;
	}

	return p;
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
		pair<int, int> p = solve ();
		cout << "MAX:" << p.first << endl;
		cout << "MIN:" << p.second << endl;
	}
}

/* No of comparsion -- 
	   If n is odd:    3*(n-1)/2  
       If n is even:   1 Initial comparison for initializing min and max, 
                           and 3(n-2)/2 comparisons for rest of the elements  
                      =  1 + 3*(n-2)/2 = 3n/2 -2
*/

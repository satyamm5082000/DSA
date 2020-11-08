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

	//Enter K
	int k;
	cin >> k;

	//print Original Array
	cout << "Original Array" << endl;
	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}

	cout << endl;

	pair<int, int> p;

	//Max Heap Created
	priority_queue<int> q1;
	//Min Heap Created
	priority_queue<int, vector<int>, greater<int>> q2;

	for (int i = 0; i < n; i++) {
		q1.push(ar[i]);
		if (q1.size() > k)
			q1.pop();
	}

	for (int i = 0; i < n; i++) {
		q2.push(ar[i]);
		if (q2.size() > k)
			q2.pop();
	}

	p.first = q1.top();//min element using max heap
	p.second = q2.top();//max element using min heap

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
		cout << "MIN:" << p.first << endl;
		cout << "MAX:" << p.second << endl;
	}
}

/* 
Used the concept of MAX and MIN heap to 
find kth min and max element of array
respectively.
TC:- O(n)
*/

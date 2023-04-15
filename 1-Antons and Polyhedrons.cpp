#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <deque>
#include <bits/stdc++.h>
#include <ostream>
#define ll long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sh short
#define lli long long int
#define TEST_CASE int t; cin >> t; while(t--){solve();}
using namespace std;



void debugMode(){
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}


int main() {
	debugMode();
	// TEST_CASE
	int n,test, faces = 0;
	cin >> test;
	string str;
	while(test--){
		cin >> str;
		if(str[0] == 'T') faces += 4;
		else if (str[0] == 'C') faces += 6;
		else if(str[0] == 'O') faces += 8;
		else if(str[0] == 'D') faces += 12;
		else if(str[0] == 'I') faces += 20;
	}
	cout << faces << endl;
}
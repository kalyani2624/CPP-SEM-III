#include <bits/stdc++.h>
using namespace std;
int fun(int idx,int arr[], int n)
{
    if(idx >= n)
    return 0;
    int pick = 1e9;
    if(idx+arr[idx]+1 <= n)
    {
        pick = fun(idx+arr[idx]+1,arr,n);
    }
    int nonpick = 1+fun(idx+1,arr,n);
    return min(pick,nonpick);
}

void solve()
{
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
     cout << fun(0,arr,n);
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}

}

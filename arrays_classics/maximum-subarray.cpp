#include <bits/stdc++.h>
#define ull unsigned long long 
#define ul unsigned long
#define ll long long
#define pb push_back
#define sodayoda_C  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,a,b) for(int i = a;i<b;i++)
#define fb(i,a,b) for(int i = a;i>b;i--)
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mp make_pair
//memset(name,'',size)
//reverse(s,begin(),s.end())
 
/*Given an integer array nums, find the contiguous subarray (containing at least one number)
 which has the largest sum and return its sum. https://leetcode.com/problems/maximum-subarray/*/
//O(n)
//Kadane’s algorithm
using namespace std;
 
int maxSubArray(vector<int> arr){
	int maxx = arr[0];
   	int curr = arr[0];
    for(auto i = arr.begin()+1;i != arr.end(); i++){
        curr = max(*i, curr + *i);
        maxx = max(maxx, curr);
    }
    return maxx;
}

int main(){	
	sodayoda_C;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n, a;
		cin>>n;
		vector<int> arr;
		f(i,0,n){
			cin>>a;
			arr.pb(a);
		}
		int sol = maxSubArray(arr);
		cout<<sol<<endl;
	}
}
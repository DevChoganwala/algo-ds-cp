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
 
//Boyer-Moore Voting algorithm

//Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.

using namespace std;
 
int main(){	
	sodayoda_C;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int nums[n];
		f(i,0,n) cin>>nums[i];
		int majority = nums[0];
        int count = 0;
		for(auto i : nums){
            if(count == 0){
                majority = i;
            }
            if(i == majority) count++;
            else count--;
        }
        cout<<majority<<endl;
	}
}
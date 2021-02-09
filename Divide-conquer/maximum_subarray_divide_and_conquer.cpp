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
 
using namespace std;
    
int maxSubArrayMid(int low, int mid, int high, int arr[]){
    int maxleft = INT_MIN;
    int sum = 0;
    for(int i = mid;i>=low;i--){
        sum+=arr[i];
        maxleft = max(maxleft, sum);
    }
    sum = 0;
    int maxright = INT_MIN;
    for(int i = mid+1;i<=high;i++){
        sum+=arr[i];
        maxright = max(maxright, sum);
    }
    return maxleft + maxright;
} 

int maxSubArrayDC(int low, int high, int arr[]){
        if(low == high){
            return arr[low];
        }
        int mid = low + (high-low)/2;
        int leftsum = maxSubArrayDC(low, mid, arr);
        int rightsum = maxSubArrayDC(mid+1, high, arr);
        int midsum = maxSubArrayMid(low, mid, high, arr);
        return max(max(leftsum, rightsum), midsum);
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
		int n;
		cin>>n;
		int arr[n];
		f(i,0,n){
			cin>>arr[i];
		}
		cout<<maxSubArrayDC(0, n-1, arr)<<endl;
	}
}
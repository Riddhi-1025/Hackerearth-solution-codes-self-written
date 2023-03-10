#include<bits/stdc++.h>

using namespace std;

long long int maxSumArray(long long int arr[],long long int n){

    long long int sum=0;

    unordered_map<long long int ,long long int>mp;

    for(int i=0;i<n;i++){

        sum += arr[i];

        mp[arr[i]]++;

    }

    long long min1 = INT_MAX;

    for(auto x : mp)

     min1 = min(min1 , x.second*x.first);

    return sum-min1;

}

int main(){

    int t;

    cin>>t;

    while(t--){

        long long int n;

        cin>>n;

        long long int arr[n];

        for(int i=0;i<n;i++){

            cin>>arr[i];

        }

        cout<<maxSumArray(arr,n)<<endl;

    }

}

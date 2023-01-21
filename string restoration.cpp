#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        int count=0;

        int n;

        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){

            cin>>arr[i];

        }

        for(int i=0;i<n-1;i++){

            if((arr[i]>arr[i+1]) || ((arr[i+1]-arr[i])>1) || (arr[0]>1)){

                count=1;

                break;

            }

        }

        if(count==1)

         cout<<"-1"<<endl;

        else{

            cout<<"a";

            for(int i=1;i<n;i++){

                if(arr[i-1]!=arr[i]){

                    int x = 96+arr[i];

                    cout<<char(x);

                }

                else

                 cout<<"a";

            }

        }

        cout<<endl;

    }

}

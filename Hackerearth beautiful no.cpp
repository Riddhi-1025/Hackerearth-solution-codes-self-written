#include<bits/stdc++.h>

using namespace std;


 

int main()

{

int t;

cin>>t;

while(t--){

long long x, k;

cin>>x>>k;

 

bool flag = false;


 

while(x!=0){

long long rem = x%k;

if(rem==0 || rem==1){

flag=true;

}

else{

//if we get something else(except 0,1) then result will NO

flag=false;

break;

}

x /= k;

}


 

if(flag==true){

cout<<"YES\n";

}

else{

cout<<"NO\n";

}

}

return 0;

}

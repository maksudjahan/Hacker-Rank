#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
        int x,y,n,d;
    cin>>x>>y>>n;
int a[n][2];
int b,c,i;
for(i=0;i<n;i++){
    for(int j=0;j<2;j++){
        cin>>a[i][j];
    }
}
b=0;
c=0;
for(i=0;i<n;i++){

    if(a[i][0]==1) b++;
    if(a[i][1]==1) c++;
}
d=max(x,y)*min(c,b)+min(x,y)*max(c,b);
cout<<d;

}
cout<<endl;
}


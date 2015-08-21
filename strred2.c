#include<iostream> 
#include<cstdio> 
#include<string> 
#include<cstring> 
#include<map> 
using namespace std; 

string s; 
map<string,int>mp; 
map<string,string>change; 
int get(string s) 
{ 
int i,j; 
int len=s.size(); 
int ans=len; 
if(mp.count(s)!=0) 
return mp[s]; 
for(i=0; i<s.size()-1; i++) 
{ 
string now=s.substr(i,2); 
if(change.count(now)!=0) 
{ 
string tp=s.substr(0,i); 
string tp1=s.substr(i+2,len-(i+2)); 
string tp2=change[now]; 
string next=tp1+tp+tp2; 
ans=min(ans,get(next)); 
} 
} 
return mp[s]=ans; 
} 
int main() 
{ 
int i,j,k,t; 
freopen("in.txt","r",stdin); 
scanf("%d",&t); 
for(i=0; i<t; i++) 
{ 
mp.clear(); 
change["ab"]="c"; 
change["ba"]="c"; 
change["ac"]="b"; 
change["ca"]="b"; 
change["cb"]="a"; 
change["bc"]="a"; 

cin>>s; 
int ans; 
ans=get(s); 
cout<<ans<<endl; 
} 
}

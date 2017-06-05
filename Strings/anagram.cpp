#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int tc,l,hm[26],count;
    cin>>tc;
    string s;
    while(tc--){
        cin>>s;
        l=s.length();
        count=0;
        if(l%2==1){cout<<-1<<"\n"; continue;}
        memset(hm,0,sizeof(hm));
        for(int i=0;i<l/2;++i){
            hm[s[i]-'a']++;
        }
        for(int i=l/2;i<l;++i){
            if(hm[s[i]-'a']) hm[s[i]-'a']--;
        }
        for(int i=0;i<26;++i) count+=hm[i];
        cout<<count<<endl;
    }
    return 0;
} 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;

    vector<int> v;
    for (int i=0; i<N;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    int x;
    cin>>x;
    x=x-1;

    int a,b;
    cin>>a>>b;
    a=a-1;
    b=b-1;

    
    v.erase(v.begin()+x);

    v.erase(v.begin()+a,v.begin()+b);

    cout<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

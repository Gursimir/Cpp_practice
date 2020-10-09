#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,Q;
    cin>>N>>Q;

    vector<string> hrml ;
    vector<string> query;

    for(int i=0;i<N;i++){
        string str;
        cin>>str;
        hrml.push_back(str);
    }

    for(int i=0;i<Q;i++){
        string str;
        cin>>str;
        query.push_back(str);
    }

    for(int i=0;i<Q;i++){
        
    }
    return 0;
}

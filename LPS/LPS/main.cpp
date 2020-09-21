//
//  main.cpp
//  LPS
//
//  Created by Sivaprasad Tamatam on 21/09/20.
//

#include <iostream>
using namespace std;

int LPS(string s){
    int ml = 1, st =0, l,h, n = s.length();
    
    for(int i =1; i<n; ++i){
        l = i-1;
        h = i;
        
        while( l>= 0 && h<n && s[l] == s[h]){
            if((h-l) > ml){
                ml = h-l+1;
                st =l;
            }
            --l;
            ++h;
        }
        
        l = i-1;
        h = i+1;
        
        while( l>=0 && h<n && s[l] == s[h]){
            if((h-l) > ml){
                ml = h-l+1;
                st = l;
            }
            --l; ++h;
        }
    }
    for( int i = st; i<st+ml; ++i){
        cout<<s[i];
    }
    return ml;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << LPS("xyzaviva")<<endl;
    return 0;
}

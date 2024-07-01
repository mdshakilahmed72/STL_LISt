// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
        list<int>mylist = {20,30,40,50,60};
        cout<<mylist.max_size()<<endl;
       // mylist.clear();
       mylist.resize(7);
        for(int val:mylist){
            cout<<val<<endl;
        }
    return 0;
}

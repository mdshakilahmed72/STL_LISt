#include <bits/stdc++.h>
using namespace std;

int main() {
  //  list <int> mylist;
   // cout<<mylist.size();
    
    // list <int> mylist(10,5);
    
    // for(auto it = mylist.begin(); it!= mylist.end(); it++){
    //     cout<<*it<<endl;
    // }
    
    
    // list<int> mylist = {1,2,3,4,5,6,7};
    // list <int> list2(mylist);
    // for(auto it = list2.begin(); it != list2.end(); it++){
    //     cout<<*it<<endl;
    // }
    
    
    // int ara[6] = {20,30,40,50,60};
    // list<int>mylist(ara,ara+5);
    
    // for(auto it = mylist.begin(); it!= mylist.end(); it++){
    //     cout<<*it<<endl;
    // }
    
    vector <int> v = {20,30,50 ,70,80,90};
    list<int> mylist(v.begin(),v.end());
    
    for(auto it = mylist.begin(); it!= mylist.end(); it++){
        cout<<*it<<endl;
    }
    
    
    
    return 0;
}

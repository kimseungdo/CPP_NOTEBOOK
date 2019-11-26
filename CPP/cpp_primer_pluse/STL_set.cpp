#include <iostream>
#include <set>
using namespace std;

class what_todo{
    int priority;
    string todo;

    public:
        
};


void print_set(set<int>& sett){
    cout<< "display set : ";
    for(int e: sett) cout<< e << " "; cout<<endl;
}

void associative_set(){
    set<int> s1 = {1,2,5,4,5,3}; //알아서 정렬해줌 중복되면 빼줌 O(logN)
    set<int> s2;
    s2.insert(1); s2.insert(10); s2.insert(100); s2.insert(1000);

    print_set(s1); print_set(s2);


    auto itr = s1.find(2);
    if(itr != s1.end()) cout<< "find~ " << *itr <<endl;
    else cout<< "not find~ " << *itr <<endl;


}
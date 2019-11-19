#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

/*
시퀀스 컨테이너(sequence container)
    vector, deque, list, forwad_list
연관 컨테이너(associative container)
    set, multiset, map, multimap
컨테이너 어댑터(adapter container)
    stack, queue, priority_queue
*/
void aa(vector<int> &T);

int main(void){
    vector<int> vi{1,2,3,4};
    cout << *vi.begin() << endl;

    for (vector<int>::iterator itr = vi.begin(); itr != vi.end(); ++itr)
        std::cout << *itr << " ";
    
    aa(vi);
}
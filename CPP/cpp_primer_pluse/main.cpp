#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

/*
������ �����̳�(sequence container)
    vector, deque, list, forwad_list
���� �����̳�(associative container)
    set, multiset, map, multimap
�����̳� �����(adapter container)
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
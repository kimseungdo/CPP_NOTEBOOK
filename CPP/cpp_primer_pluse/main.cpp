#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

/*
������ �����̳�(sequence container)
    vector, deque, list, forwad_list
���� �����̳�(associative container)
    set, multiset, map, multimap
����(adapter container)
    stack, queue, priority_queue
*/
void extern_func_test(int n);

void sequence_vector();
void sequence_list();

int main(void){
    
    sequence_vector();
    //sequence_list();

    return 0;
}
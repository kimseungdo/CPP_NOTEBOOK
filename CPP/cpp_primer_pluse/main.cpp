/*
������ �����̳�(sequence container)
    vector, deque, list, forwad_list
���� �����̳�(associative container)
    set, multiset, map, multimap
����(adapter container)
    stack, queue, priority_queue
*/
#include <ctime>
#include <iostream>

void extern_func_test(int n);

void sequence_vector();
void sequence_list();
void sequence_deque();

int main(void){
    clock_t start, end;
    start = clock();

    
    //sequence_vector();
    //sequence_list();
    sequence_deque();
    

    end = clock();
    double result = double (end - start)/CLOCKS_PER_SEC;
    std::cout << "time out : " << result << std::endl; 
    return 0;
}
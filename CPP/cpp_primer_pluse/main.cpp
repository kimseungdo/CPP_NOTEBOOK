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
/* sequence_container
중간 원소 제거가 많고 순차 접근하면 리스트
처음 끝에 원소 추가 많이하면 덱뀨
그냥 벡터쓰자
*/
void associative_set();

/*
얘내들은 대응값이 있는애들임 key - value 관계
X가 존재하냐 ~~~ set / multiset || 존재와 값을 찾는데 유리
X가 존재하는데 대응값은 ~~~ map / multimap || 얘네들은 set처럼 쓸수있음 그냥 값을 갖고있어서


*/

int main(void){
    clock_t start, end;
    start = clock();

    //sequence_vector();
    //sequence_list();
    //sequence_deque();
    
    associative_set();

    end = clock();
    double result = double (end - start)/CLOCKS_PER_SEC;
    std::cout.precision(10);
    std::cout << "time out : " << result << std::endl; 
    return 0;
}
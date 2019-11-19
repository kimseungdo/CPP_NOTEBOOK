#include <iostream>
#include <vector>
using namespace std;

/*
배열같은놈 배열로 접근 가능
반복자 타입 RandomAccessIterator
RandomAccessIterator는 BidirectionalIterator를 상속받고 있음

push_back() pop_back()
*/

void extern_func_test(int n){
    for(int i=0; i<n; i++) cout<<"다른 파일 매개변수로 전달 된다고!"<<endl;
}

//벡터는 배열로 받는다
void print_vector(vector<int>& T){
    cout<<"display vector"; for(int i=0; i<T.size(); ++i) cout<< T[i] << " "; cout<< endl;
    //cout<<"another display vector"; for(const auto& e : T) cout<< e << " "; cout<< endl;
}

void sequence_vector(){
    vector<int> vi = {1, 10, 100, 1000};
    //for (vector<int>::iterator itr = vi.begin(); itr != vi.end(); ++itr) std::cout << *itr << " ";
    print_vector(vi);
    
    *vi.insert(vi.begin(), 15); print_vector(vi);
    *vi.erase(vi.begin()); print_vector(vi);

    vector<int>::iterator left_v = vi.begin(); //멤버타입으로 정의
    vector<int>::reverse_iterator right_v = vi.rbegin();

    cout<<"reverce vector display : "; for(; right_v != vi.rend(); right_v++) cout<< *right_v<< " "; 
    cout<<endl<<"vector container"<<endl<<endl;
}
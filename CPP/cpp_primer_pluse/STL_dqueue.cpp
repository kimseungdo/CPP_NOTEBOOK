#include <iostream>
#include <deque>


using namespace std;
/*
이놈도 배열이ㅑ!

*/

void print_deque(deque<int>& T){
    cout<<"display deque "; for(int i=0; i<T.size(); ++i) cout<< T[i] << " "; cout<< endl;
}


void sequence_deque(){
    std::deque<int> dq;
    dq.push_front(30);
    dq.push_back(20);
    dq.push_front(10);
    dq.push_front(40);
    print_deque(dq);

    cout << "at(2) " << dq.at(2) << "  arr[2] " << dq[2] << endl;;
}
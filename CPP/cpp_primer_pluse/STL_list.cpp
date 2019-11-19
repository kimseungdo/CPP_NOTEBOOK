/*
양뱡향 연결구조 자료형
연속적으로 존재하지 않기 때문에 후위 연산자밖에 쓸수 없음 ~~~~~ i++ / i--
연속적으로 존재해서 임의 위치에 있는놈을 쉽게 잡는다

반복자 타입 BidirectionalIterator

*/
#include <iostream>
#include <list>

using namespace std;

void print_list(list<int>& T){
    cout<<"display list : "; for(const auto& e: T) cout<< e << " "; cout<< endl;
}

void sequence_list(){
    list<int> li;
    li.push_back(1); li.push_back(10); li.push_back(100); li.push_back(1000);
    
    cout << "li size - " << li.size() << "/ front - " << li.front() << " back - " << li.back() << endl;

    list<int>::iterator itr;
    
    for(itr = li.begin(); itr != li.end(); ++itr){
        if(*itr == 10) li.insert(itr, 5); //앞에 원소를 집어넣음
    }   cout<< "insert 5 ~~~ "; print_list(li);
    
    for(itr = li.begin(); itr != li.end(); ++itr){
        if(*itr == 10) li.erase(itr); //그 원소를 지워버림
    }   cout<< "erase 10 ~~~ "; print_list(li);


    cout<<endl<< "list container" <<endl;
}
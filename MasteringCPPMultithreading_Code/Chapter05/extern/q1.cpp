#include <iostream>
#include <mutex>
#include <thread>
#include <condition_variable>

#include <future>
#include <chrono>

#include <functional>
using namespace std;

/*
#pragma region 1

mutex m;
condition_variable cv;
bool ready = false;
ThreadLocal result;

void worker(){
    unique_lock<mutex> ulock(m);
    result = thread_local_method();
    ready = true;
    std::notify_all_at_thread_exit(cv, std::move(ulock) );
}

int main(void){
    thread t(worker); t.detach(); unique_lock<std::mutex> ulock(m);
    while(!ready){
        cv.wait(ulock);
    }
}
#pragma endregion 1
*/

/*
#pragma region 2

bool is_prime(int x){for(int i=2; i<x; ++i) if(x%i==0) return false; return true;}
int main(){
    std::future<bool> fut = std::async(is_prime, 444444443); cout<<"checking, wait"; chrono::milliseconds span(100);
    while(fut.wait_for(span) == future_status::timeout){cout<<'.'<<flush;}
    std::cout<<"Tl"<<std::endl;
    bool x = fut.get(); cout<<"\n444444443"<<(x?"is":"is not")<<"primt.\n"; return 0;
}
#pragma endregion 2
*/

/*
#pragma region 3

void print_int(std::future<int> &fut){int x; std::cout<<"value:"<<x<<std::endl;}
int main(){std::promise<int> prom; std::future<int> fut = prom.get_future(); std::thread th1(print_int, std::ref(fut));
prom.set_value(10); th1.join(); return 0;}
#pragma endregion 3
*/

/*
#pragma region 4 인따넷 예시
void worker(std::promise<string>* p) {
  // 약속을 이행하는 모습. 해당 결과는 future 에 들어간다.
  p->set_value("some data");
}
int main() {
  std::promise<string> p;

  // 미래에 string 데이터를 돌려 주겠다는 약속.
  std::future<string> data = p.get_future();

  std::thread t(worker, &p);

  // 미래에 약속된 데이터를 받을 때 까지 기다린다.
  data.wait();

  // wait 이 리턴했다는 뜻이 future 에 데이터가 준비되었다는 의미.
  // 참고로 wait 없이 그냥 get 해도 wait 한 것과 같다.
  std::cout << "받은 데이터 : " << data.get() << std::endl;

  t.join();
}
#pragma endregion 4 인따넷 예시
*/

int main(int argc, char *argv[]) { int a=2, b=10, c=20; cout<<b; return 0;}

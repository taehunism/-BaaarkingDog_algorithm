#include <iostream>

using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    dat[pos++] = x;
}

void pop(){
    pos--;
}

int top(){
    return dat[pos-1];
}

int size(){
    return pos;
}

int empty() {
    if (pos==0) return 1;
    else return 0;
}

void test(){
  push(5); push(4); push(3);
  cout << top() << '\n'; // 3
  pop(); pop();
  cout << top() << '\n'; // 5
  push(10); push(12);
  cout << top() << '\n'; // 12
  pop();
  cout << top() << '\n'; // 10
  cout << size() << '\n';
  cout << empty() << '\n';
}

int main(void) {
	test();
}
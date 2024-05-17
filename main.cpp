#include "queue.h"
#include <iostream>
using namespace std;
int main() {
  Queue<int> q;
  int s;
  q.push(5);
  q.push(6);
  q.print();
  q.pop(s);
  cout << "first removed value: " << s << endl;
  q.print();
  q.pop(s);
  cout << "second removed value: " << s << endl;
  q.print();
  cout << q.isEmpty() << endl;
}

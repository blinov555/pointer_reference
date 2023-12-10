#include <iostream>

using namespace std;

struct sample {
  int a {1};
  int b {2};
}param;

sample fooPtr(sample *);
sample &fooRef(sample &);

int main() {

  cout << param.a << " " << param.b << "\n";

  sample *ptr;
  ptr = &param;
  param = fooPtr(ptr);

  cout << param.a << " " << param.b << "\n";

  param = fooRef(param);

  cout << param.a << " " << param.b << "\n";

  return 0;
}

sample fooPtr(sample *p){
  p->a = 11;
  p->b = 22;
  return *p;
}

sample &fooRef(sample &r){
  r.a = 111;
  r.b = 222;
  return r;
}
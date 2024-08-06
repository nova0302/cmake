#include <iostream>
#include "CPerson.hh"

using namespace std;

int main(int argc, char *argv[])
{
  CPerson p("Peter", 22);
  p.print();
  for (int i=0; i<4; ++i) {
    cout << i << " Hello World!!" << endl;
  }
  return 0;
}

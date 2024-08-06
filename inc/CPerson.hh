#include <iostream>

using namespace std;

class CPerson
{
public:
  CPerson(string Name, uint32_t Age ) :m_Name(Name), m_Age(Age) {}
  void print(){
    cout << "Name: " << m_Name << " Age: " << m_Age << endl;
      }
private:
  string m_Name;
  uint32_t  m_Age;

};

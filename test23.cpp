#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int age = 19;
  double gpa = 2.7;
  string name = "Mike";

  cout << &age << endl;

  int *pAge = &age;

  cout << pAge << endl;
  cout << *pAge << endl;
  cout << &pAge << endl;
  cout << *&pAge << endl;
  cout << &*pAge << endl;

  return 0;
}

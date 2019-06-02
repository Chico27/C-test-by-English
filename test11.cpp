#include<iostream>
#include<cmath>

using namespace std;

void sayHi(){
  cout << "Hello User";
}

void sayHi(string name){
  cout << "Hello " << name;
}

int main()
{
  sayHi();
  sayHi("arew");


  return 0;
}

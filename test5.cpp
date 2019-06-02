#include<iostream>

using namespace std;

int main()
{
  string phrase = "Giraffe Academy";
  cout << phrase;
  cout << phrase.length();
  cout << phrase[0];
  cout << phrase.find("Academy", 0);
  cout << phrase.substr(8, 4);

  return 0;
}

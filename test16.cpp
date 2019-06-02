#include<iostream>
#include<cmath>

using namespace std;

string getDayOfWeek(int dayNum){
  string dayName;

  switch (dayNum) {
    case 0:
      dayName = "Sunday";
      break;
    case 1:
      dayName = "Monday";
      break;
    default:
      dayName = "Invalid day number";
  }
  return dayName;

}

int main()
{

  cout << getDayOfWeek(0);



  return 0;
}

#include <iostream>
using namespace std;
int main() {
  int number;
  cout<<"Enter number from (1-7):";
  cin>>number;
  switch(number){
      case 1:
      cout<<"monday";
      break;
       case 2:
      cout<<"tuesday";
      break;
       case 3:
      cout<<"wensday";
      break;
       case 4:
      cout<<"thirsday";
      break;
      
       case 5:
      cout<<"friday";
      break;
       case 6:
      cout<<"saturday";
      break;
        case 7:
      cout<<"sunday";
      break;
      default:
      cout<<"invalid number";
  }

    return 0;
}
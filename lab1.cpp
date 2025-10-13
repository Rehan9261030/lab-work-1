// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>

 using namespace std;
int main() {
  string name1,name2;
  int quantity1,quantity2;
  float price1,price2;
  cout<<"Enter your first product:";
  getline(cin,name1);
  cout<<"Enter quantity:";
  cin>>quantity1;
  cout<<"Price:";
  cin>>price1;
  cout<<"\n";
   cout<<"Enter your second product:\n";
  getline(cin,name2);
  cout<<"Enter quantity:";
  cin>>quantity2;
  cout<<"Price:";
  cin>>price2;
   cout<<"\n";
   cout<<"-------------------------------------------------\n";
   cout<<setw(10)<<left<<"NAME"<<setw(10)<<right<<"QUANTITY"<<setw(10)<<"PRICE"<<endl;
   cout<<"-------------------------------------------------"<<endl;
   cout<<setw(10)<<left<<name1<<setw(10)<<right<<quantity1<<setw(10)<<price1<<endl;
   cout<<setw(10)<<left<<name2<<setw(10)<<right<<quantity2<<setw(10)<<price2<<endl;
   cout<<"-------------------------------------------------";
    return 0;
}
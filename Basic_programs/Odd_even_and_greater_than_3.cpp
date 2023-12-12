#include <iostream>
using namespace std;
int main() 
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  (num&1==1) ? cout<< "Number is odd"<<endl : cout<< "Number is even"<<endl;
  
  if(num==3)
    cout<< "Number is equal to three";
  else if(num<3)
    cout<< "Number is lesser than three";
  else
    cout<< "Number is greater than three";
  return 0;
}
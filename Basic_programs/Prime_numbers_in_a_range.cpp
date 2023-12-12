# include <iostream>
using namespace std;
void checkPrimeOrNotBtr (int num)
{
  int flag = 0;
  
  if (num <= 1)
    return;
    
  else if (num == 2)
    cout << num << endl;

  else
  {
    for (int i = 2 ; i*i <= num ; i++)
      {
        if (num % i == 0)
        {
          flag = 1;
          break;
        }
      }
    if (flag == 0)
      cout << num << endl;
  }
}

void checkPrimeOrNot (int num)
{
  int flag = 0;
  
  if (num <= 1)
    return;
    
  else if (num == 2)
    cout << num << endl;

  else
  {
    for (int i = 2 ; i < num ; i++)
      {
        if (num % i == 0)
        {
          flag = 1;
          break;
        }
      }
    if (flag == 0)
      cout << num << endl;
  }
}
int main()
{
  int num1, num2;
  cout << "Enter the value of num1 and num2 : ";
  cin >> num1 >> num2;

  cout << "Prime numbers are : " << endl;
  
  for(int i = num1 ; i <= num2 ; i++)
    checkPrimeOrNotBtr (i);
  
  return 0;
}
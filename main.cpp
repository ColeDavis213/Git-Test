#include <iostream>

using namespace std;

int product(int n)
{
  int prod = 1;

  for(int i = 1; i <= n; i++)
    {
      prod *= i;
    }

  return prod;
}

int sum(int n)
{
  int sum = 0;
  
  for(int i = 1; i <= n; i++)
    {
      sum += i;
    }

  return sum;
}

int main()
{
  int n;

  cout << "Enter a number: ";
  cin >> n;

  cout << "Sum: " << sum(n) << endl;
  cout << "Product " << product(n) << endl;
}

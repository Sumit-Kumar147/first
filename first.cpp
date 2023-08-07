#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{

  
  int option;
  while (1)
  {
    cout << "addition" << endl;
    cout << "subtraction" << endl;
    cout << "multiplication" << endl;
    cout << "division" << endl;
    cout << "sum of n natural number" << endl;
    cout << "no is even odd or prime" << endl;
    cout << "factorial" << endl;
    cout << "multitable" << endl;
    cout << "fibnacci series" << endl;
    cout << "exit" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
    {
      int a, b;
      cout << "enter two number";
      cin >> a >> b;
      cout << "sum of two number is"
           << " " << a + b << endl;
      cout << endl;
      break;
    }
    case 2:
    {
      int c, d;
      cout << "enter two number";
      cin >> c >> d;
      cout << "subtraction of two number is"
           << " " << c - d << endl;
      cout << endl;
      break;
    }
    case 3:
    {
      int e, f;
      cout << "enter two number";
      cin >> e >> f;
      cout << "multiplication of two number is"
           << " " << e * f << endl;
      cout << endl;
      break;
    }
    case 4:
    {
      float g, h;
      cout << "enter two number";
      cin >> g >> h;
      cout << "division of two number is"
           << " " << g / h << endl;
      cout << endl;
      break;
    }
    case 5:
    {
      int p;
      cout << "enter a number";
      cin >> p;
      cout << "sum of n natural number is"
           << " " << p * (p + 1) / 2 << endl;
      cout << endl;
      break;
    }
    case 6:
    {
      int n, s;
      cout << "enter a number";
      cin >> n;
      if (n % 2 == 0)
        cout << "number is even" << endl;
      else
        cout << "number is odd" << endl;
      for (s = 2; s < n; s++)
      {
        if (n % s == 0)
        {
          break;
        }
      }
      if (s == n)
        cout << "number is prime" << endl;
      else
        cout << "number is not prime" << endl;
      cout << endl;
      break;
    }
    case 7:
    {
      int r;
      int m = 1;
      cout << "enter a number";
      cin >> r;
      for (int i = 1; i <= r; i++)
      {
        m = m * i;
      }
      cout << "factorial of number is"
           << " " << m << endl;
      cout << endl;
      break;
    }
    case 8:
    {
      int q;
      cout << "enter a number";
      cin >> q;
      for (int i = 1; i <= 10; i++)
        cout << q * i << endl;
      cout << endl;
      break;
    }
    case 9:
    {
      int k, at = 0, bt = 1, ct;
      cout << "enter a number" << endl;
      cin >> k;
      cout << at << " " << bt << " ";
      for (int i = 2; i < k; i++)
      {
        ct = at + bt;
        cout << ct << " ";
        at = bt;
        bt = ct;
      }
      cout << endl;
      break;
    }

    case 10:
    {
      exit(0);
    }
      // default
      //  cout<<"invalid input";
    }
  }

  return 0;
}
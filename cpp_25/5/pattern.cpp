/******************************************************************************
4. b. Write a program to get the following result.

Expected output using Iterators:

10      50

5       10      50      100

100

100

50
*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int num, val;
  cout << "Enter the number of lines from 1-5";
  cin >> num;
  cout << "Enter the value of x";
  cin >> val;
  for (int i = 1; i <= num; i++)
    {
      if (i == 1)
	{
	  cout << val << "\t" << val * 5;
	  cout << "\n";
	}

      if (i == 2)
	{
	  cout << val / 2 << "\t" << val << "\t" << val * 5 << "\t" << val *
	    10;
	  cout << "\n";
	}

      if (i == 3 || i == 4)
	{
	  cout << val * 10;
	  cout << "\n";
	}
      if (i == 5)
	{
	  cout << val * 5;
	  cout << "\n";
	}
    }
  return 0;
}

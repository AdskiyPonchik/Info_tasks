// Lottery.cpp
#include <iostream>
#include "23_stack.h"
#include <ctime>

const int NMAX = 10;

int main()
{
  Stack s;
  s.push(0);
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);
  s.push(7);
  s.push(8);
  s.push(9);
  cout << s.toString();

  s.pop();
  cout << s.toString();

  try
  {
    s.pop();
    s.pop();
    s.pop(); // This will throw an error
  }
  catch (char *e)
  {
    cout << e << endl;
  }

  return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 0;
    b = 0;
    char s;

    while (true) 
    {
      cin >> a >> s >> b;
      {
          switch (s)
          {
          case '*':
              cout << a * b;
              break;
          case '/':
              cout << a / b;
              break;
          case '-':
              cout << a - b;
              break;
          case '+':
              cout << a + b;
              break;
          case '1':
              return 0;
          default:
              return 0;
          }
      }
    }
}
#include <iostream>

struct Job
{
  int r;			// arrival time
  int p;			// processing time
};

int main()
{
  // read input
  int n;
  std::cin >> n;
  while (n--)
    {
      Job j;
      std::cin >> j.r;
      std::cin >> j.p;
    }

  int cMax = -1;
  std::cout << cMax << std::endl;

  return 0;
}

#include <iostream>
#include <vector>

struct Job
{
  int p;			// processing time
  int w;			// tardiness weight
  int d;			// deadline
};

int main()
{
  std::vector<Job> input;

  // read input
  int n;
  std::cin >> n;
  while (n--)
    {
      Job j;
      std::cin >> j.p;
      std::cin >> j.w;
      std::cin >> j.d;
      input.push_back(j);
    }

  // process
  int wiTi = -1;

  // ...

  // print result
  std::cout << wiTi << std::endl;

  return 0;
}

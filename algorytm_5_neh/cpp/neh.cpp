#include <iostream>
#include <vector>

int main()
{
  std::vector<std::vector<int> > processingTimes;

  // read input
  int n, m;
  std::cin >> n >> m;
  for (int i = 0; i < n; i++)
    {
      processingTimes.push_back(std::vector<int>());
      for (int j = 0; j < m; j++)
	{
	  int p;
	  std::cin >> p;
	  processingTimes[i].push_back(p);
	}
    }

  // process
  int cMax = -1;

  // ...

  // print result
  std::cout << cMax << std::endl;

  return 0;
}

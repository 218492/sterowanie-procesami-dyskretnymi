#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <tuple>

struct Job
{
  int r;			// arrival time
  int p;			// processing time
  int q;			// delivery time
};

std::vector<Job> schrage_S(std::vector<Job> jobs) // Schrage bez podzialow, zwraca permutacje w formie wektora
{
  std::vector<Job> permutation;

  // ...

  return permutation;
}

int eval(std::vector<Job> permutation) // liczenie cMax z permutacji
{
  int cMax = -1;

  // ...

  return cMax;
}

int schrage_prmtS(std::vector<Job> jobs) // Schrage z podzialami, zwraca cMax
{
  int cMax = -1;

  // ...

  return cMax;
}

std::tuple<int, int, int> block(std::vector<Job> permutation) // liczenie bloku a, b, c na podstawie permutacji
{
  int a = -1;
  int b = -1;
  int c = -1;

  // ...

  return std::make_tuple(a,b,c);
}

void carlier(std::vector<Job> jobs, int& ub) // Carlier, przyjmuje wektor zadan oraz gorne oszacowanie (ub) ktore na koniec jest poszukiwanym cMax
{
  // ...

  // auto bl = block(???);
  // int a = std::get<0>(bl);
  // int b = std::get<1>(bl);
  // int c = std::get<2>(bl);

  // ...
}

int main()
{
  std::vector<Job> input;

  // read input
  int n;
  std::cin >> n;
  while (n--)
    {
      Job j;
      std::cin >> j.r;
      std::cin >> j.p;
      std::cin >> j.q;
      input.push_back(j);
    }

  // process
  int cMax = INT_MAX;
  carlier(input, cMax);

  // print result
  std::cout << cMax << std::endl;

  return 0;
}

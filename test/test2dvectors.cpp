#include "Vector2DDataStrcuture.hpp"
#include "DataStructureHolder.h"
#include <vector>
using namespace std;
int main(int ac, char** av)
{
  DataStructureHolder dataHolder;

  vector<int> row1 = {1,2,3,4};
  vector<int> row2 = {5,6,7,8};
  std::vector<std::vector<int>> myVec = { row1, row2 };
  

  CREATE_VECTOR_DATATRUCTURE(int, myVec);
  TRACK_2DVEC_DATASTRUCT(int, myVec, dataHolder);

  dataHolder.PrintAllStructures();
  return 0;
}

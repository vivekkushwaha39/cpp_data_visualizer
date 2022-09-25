#pragma once
#include "Vector2DDataStructureBase.h"
#include <vector>
class DataStructureHolder
{
  private: 
    std::vector<Vector2DDataStructureBase *> m_2DStructs;

  public:
    std::vector<Vector2DDataStructureBase *> & GetAll2DStructs();

    void Track2Dtructure(Vector2DDataStructureBase * /*p2DDataStruct*/);

    void PrintAllStructures();
};

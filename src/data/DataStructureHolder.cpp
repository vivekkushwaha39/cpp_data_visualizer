#include "DataStructureHolder.h"
#include <iostream>
std::vector<Vector2DDataStructureBase *> & DataStructureHolder::GetAll2DStructs()
{
  return m_2DStructs;
}

void DataStructureHolder::Track2Dtructure(Vector2DDataStructureBase * p2DDataStruct)
{
  std::cout << "added\n";
  m_2DStructs.push_back(p2DDataStruct);
}

void DataStructureHolder::PrintAllStructures()
{
  for (size_t i=0; i<m_2DStructs.size(); ++i)
  {
    std::cout << "yes\n";
    IStdOuputWriter *writer = dynamic_cast<IStdOuputWriter *>(m_2DStructs[i]);
    if (writer)
      writer->Write();
  }
}
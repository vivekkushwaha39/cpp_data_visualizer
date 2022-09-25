#include "Vector2DDataStructureBase.h"

#include <iostream>
using namespace std;

size_t Vector2DDataStructureBase::GetNumRows()
{
  return GetNumRowsImpl();
}

size_t Vector2DDataStructureBase::GetNumItemsCurrRow(size_t idx)
{
  return GetNumItemsCurrRowImpl(idx);
}

std::string Vector2DDataStructureBase::GetItemAt(size_t row, size_t col)
{
  return GetItemAtImpl(row, col);
}

// std::string Vector2DDataStructureBase::GetItemAtImpl(size_t row, size_t col)
// {
//   return "";
// }


// size_t Vector2DDataStructureBase::GetNumRowsImpl()
// {
//   return 0;
// }

// size_t Vector2DDataStructureBase::GetNumItemsCurrRowImpl(size_t idx)
// {
//   return 0;
// }


Vector2DDataStructureBase::Vector2DDataStructureBase()
{
}

Vector2DDataStructureBase::~Vector2DDataStructureBase()
{
}

void Vector2DDataStructureBase::Write()
{
  size_t numRows = GetNumRows();
  for (size_t i=0; i< numRows; i++)
  {
    size_t numItems = GetNumItemsCurrRow(i);
    for ( size_t j = 0; j< numItems ; ++j)
    {
      cout << GetItemAt(i, j) << "\t";
    }

    cout << "\n";
  }
}
#pragma once

#include "Vector2DDataStructureBase.h"
#include <sstream>
#include <vector>

#define CREATE_VECTOR_DATATRUCTURE(typ, variable)                             \
  class Vector2DDataStrcuture_##variable##_##typ : public Vector2DDataStructureBase \
  {                                                                         \
    std::vector<std::vector<typ>> &m_##variable##_##typ;                     \
    size_t m_CurrRow;                                                                        \
    std::stringstream m_ss; \    
  public: \
          \
    Vector2DDataStrcuture_##variable##_##typ( std::vector<std::vector<typ>> &_mem ):m_##variable##_##typ(_mem){} \
    std::string GetItemAtImpl(size_t row, size_t col)  override     \
  { \
    m_ss.str(""); \
    m_ss << m_##variable##_##typ[row][col]; \
    return m_ss.str(); \
  } \
    \
     size_t GetNumRowsImpl() override { return  m_##variable##_##typ.size(); }         \
     size_t GetNumItemsCurrRowImpl(size_t idx)  override { return m_##variable##_##typ[idx].size(); } \
  } objVector2DDataStrcuture_##variable##_##typ(variable);

#define TRACK_2DVEC_DATASTRUCT(typ, variable, tracker) \
  tracker.Track2Dtructure(&objVector2DDataStrcuture_##variable##_##typ);


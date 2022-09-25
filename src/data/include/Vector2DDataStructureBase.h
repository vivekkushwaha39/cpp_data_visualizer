#pragma once

#include <vector>
#include <string>
#include "DataStructure.h"
#include "IStdOuputWriter.h"

class Vector2DDataStructureBase : public DataStructure, public IStdOuputWriter
{

public:
  size_t GetNumRows();
  size_t GetNumItemsCurrRow(size_t /*idx*/);
  std::string GetItemAt(size_t /*row*/, size_t /*col*/);

  virtual size_t GetNumRowsImpl() = 0;
  virtual size_t GetNumItemsCurrRowImpl(size_t /*idx*/) = 0;
  virtual std::string GetItemAtImpl(size_t /*row*/, size_t /*col*/)=0;


  // implementation of OutoutWriter
  virtual void Write(); 

  Vector2DDataStructureBase();
  ~Vector2DDataStructureBase();
};


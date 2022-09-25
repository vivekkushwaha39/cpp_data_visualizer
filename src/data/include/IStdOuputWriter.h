#pragma once

class IStdOuputWriter
{
private:
  /* data */
public:
  virtual void Write() = 0;
  IStdOuputWriter(/* args */)=default;
  virtual ~IStdOuputWriter()=default;
};

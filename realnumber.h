#ifndef REALNUMBER_H
#define REALNUMBER_H
#include"number.h"

class RealNumber: public Number
{
public:
  RealNumber(double=0);
  ~RealNumber();
  virtual void print();
  virtual RealNumber add(const RealNumber &other);
  virtual RealNumber mul(const RealNumber &other);
private:
  double n;
};

#endif

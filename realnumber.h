#ifndef REALNUMBER_H
#define REALNUMBER_H
#include"number.h"

class RealNumber: public Number
{
public:
  friend RealNumber operator+(const RealNumber&, const RealNumber&);
  friend RealNumber operator*(const RealNumber&, const RealNumber&);
  RealNumber(double=0);
  ~RealNumber();
  virtual void print();
  virtual RealNumber add(const RealNumber &other);
  virtual RealNumber mul(const RealNumber &other);
private:
  double n;
};

#endif

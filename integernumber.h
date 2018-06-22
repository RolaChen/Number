#ifndef INTEGERNUMBER_H
#define INTEGERNUMBER_H
#include"number.h"
#include"realnumber.h"
#include<iostream>

class IntegerNumber:public RealNumber
{
public:
  friend IntegerNumber operator+(const IntegerNumber&, const IntegerNumber&);
  friend IntegerNumber operator*(const IntegerNumber&, const IntegerNumber&); 
  IntegerNumber(int);
  ~IntegerNumber();
  void print();
  IntegerNumber add(const IntegerNumber &other);
  IntegerNumber mul(const IntegerNumber &other);
private:
  int n;
};
#endif

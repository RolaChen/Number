#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include"number.h"
#include<string>

class ComplexNumber:public Number
{
public:
  friend ComplexNumber operator+(const ComplexNumber&, const ComplexNumber&);
  friend ComplexNumber operator*(const ComplexNumber&, const ComplexNumber&);
  ComplexNumber(std::string);
  ~ComplexNumber();
  void print();
  ComplexNumber add(const ComplexNumber &other);
  ComplexNumber mul(const ComplexNumber &other);
private:
  double a;
  double b;
  bool sign;
};
#endif

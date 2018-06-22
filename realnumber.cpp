#include"number.h"
#include"realnumber.h"
#include<iostream>
using namespace std;

RealNumber::RealNumber(double a)
{
  n=a;
}

RealNumber::~RealNumber()
{
}

void RealNumber::print()
{
  cout<<"I am a RealNumber, my value is: ";
  cout<<n<<endl;
}


RealNumber RealNumber::add (const RealNumber & other)
{
  RealNumber obj(n+other.n);
  return obj;
}

RealNumber RealNumber::mul (const RealNumber & other)
{
  RealNumber obj(n*other.n);
  return obj;
}

RealNumber operator+(const RealNumber& other1, const RealNumber& other2)
{
  RealNumber obj(other1.n+other2.n);
  return obj;
}

RealNumber operator*(const RealNumber& other1, const RealNumber& other2)
{
  RealNumber obj(other1.n*other2.n);
  return obj;
}

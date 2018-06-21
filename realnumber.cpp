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


#include"integernumber.h"
#include<iostream>
using namespace std;

IntegerNumber::IntegerNumber(int a)
{
  n=a;
}

IntegerNumber::~IntegerNumber(){}

void IntegerNumber::print()
{
  cout<<"I am a IntegerNumber, my value is: ";
  cout<<n<<endl;
}

IntegerNumber IntegerNumber::add(const IntegerNumber &other)
{
  IntegerNumber k(n+other.n);
  return k;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber &other)
{
  IntegerNumber k(n*other.n);
  return k;
}


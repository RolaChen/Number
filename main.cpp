#include"number.h"
#include"realnumber.h"
#include"integernumber.h"
#include"complexnumber.h"
#include<iostream>
using namespace std;

int main()
{
  RealNumber a(4.3),b(34.43),c(0);
  a.print();
  b.print();
  Number *p=&c;
  c=a.add(b);
  cout<<"after add"<<endl;
  p->print();
  c=b.mul(a);
  cout<<"after mul"<<endl;
  p->print();
  cout<<endl;

  IntegerNumber e(45),f(6),g(0);
  e.print();
  f.print();
  p=&g;
  g=e.add(f);
  cout<<"after add"<<endl;
  p->print();
  g=f.mul(e);
  cout<<"after mul"<<endl;
  p->print();
  cout<<endl;

  ComplexNumber h("3.25+1i"), i("6.25+1.5i"),j("0");
  h.print();
  i.print();
  j.print();
  p=&j;
  j=h.add(i);
  cout<<"after add"<<endl;
  p->print();
  j=i.mul(h);
  cout<<"after mul"<<endl;
  p->print();
  return 0;
}

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

  ComplexNumber h("3.25+i"), i("6.25+1.5i"),j("0");
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
  cout<<endl;
  cout<<"----below is used operator----"<<endl<<endl;

  RealNumber a1(-12.3),b1(32.2),c1(0);
  a1.print();
  b1.print();
  p=&c1;
  c1=a1+b1;
  cout<<"after add"<<endl;
  p->print();
  c1=a1*b1;
  cout<<"after mul"<<endl;
  p->print();
  cout<<endl;

  IntegerNumber d1(-4),e1(-45),f1(0);
  d1.print();
  b1.print();
  p=&f1;
  f1=d1+e1;
  cout<<"after add"<<endl;
  p->print();
  f1=d1*e1;
  cout<<"after mul"<<endl;
  p->print();
  cout<<endl;

  ComplexNumber h1("3.25+1i"), i1("6.25-1.5i"),j1("0");
  h1.print();
  i1.print();
  j1.print();
  p=&j1;
  j1=h1+i1;
  cout<<"after add"<<endl;
  p->print();
  j1=h1*i1;
  cout<<"after mul"<<endl;
  p->print();
  return 0;
}

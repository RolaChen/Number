#include"complexnumber.h"
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

ComplexNumber::ComplexNumber(string s)
{
  int n=s.length();
  double a1=0,a2=0,b1=0,b2=0;
  bool j1=0,j2=0;
  bool first=1;
  bool j3=0;
  int num=1;
  sign=1;
  for(int i=0;i<n;i++)
  {
    if(first)
    {
       if(!j1)
       {
          if(s[i]>='0'&&s[i]<='9')
            a1=a1*10+s[i]-'0';
          else if(s[i]=='.')
            j1=1;
       }
       else
       {
          if(s[i]>='0'&&s[i]<='9')
            a2+=(s[i]-'0')*pow(0.1,num++);
       }
       if(s[i]=='+')
         first=0, num=1;
       else if(s[i]=='-')
         sign=0,first=0,num=1;
    }
    else
    {
       if(!j3)
       {
          if(s[i]=='i')
          {
            if(sign=1)
               b1=1;
            else b1=-1;
          }
       }
       if(!j2)
       {
          if(s[i]>='0'&&s[i]<='9')
            b1=b1*10+s[i]-'0',j3=1;
          else if(s[i]=='.')
            j2=1;
       }
       else
       {
          if(s[i]>='0'&&s[i]<='9')
            b2+=(s[i]-'0')*pow(0.1,num++);
       }
    } 
  }
  a=a1+a2;
  if(sign)
    b=b1+b2;
  else
    b=0-b1-b2;
}

ComplexNumber::~ComplexNumber(){}

void ComplexNumber::print()
{
  cout<<"I am a ComplexNumber, my value is: ";
  cout<<a;
  if(b!=0)
  { 
    if(b>0)
    {
       cout<<"+";
       if(b!=1)
         cout<<b;
       cout<<"i"<<endl;
    }
    else
      if(b!=-1)
        cout<<b<<"i"<<endl;
      else
        cout<<"-i"<<endl;
  }
  else cout<<endl;
}

ComplexNumber ComplexNumber::add(const ComplexNumber &other)
{
  ComplexNumber obj("0");
  obj.a=a+other.a;
  obj.b=b+other.b;
  return obj;
}

ComplexNumber ComplexNumber::mul(const ComplexNumber &other)
{
  ComplexNumber obj("0");
  obj.a=a*other.a-b*other.b;
  obj.b=a*other.b+b*other.a;
  if(obj.b<0)
    sign=0;
  else
    sign=1;
  return obj;
}

ComplexNumber operator+(const ComplexNumber& other1, const ComplexNumber& other2)
{
  ComplexNumber obj("0");
  obj.a=other1.a+other2.a;
  obj.b=other1.b+other2.b;
  if(obj.b<0)
    obj.sign=0;
  else
    obj.sign=1;
  return obj;
}

ComplexNumber operator*(const ComplexNumber& other1, const ComplexNumber& other2)
{
  ComplexNumber obj("0");
  obj.a=other1.a*other2.a-other1.b*other2.b;
  obj.b=other1.a*other2.b+other1.b*other2.a;
  if(obj.b<0)
    obj.sign=0;
  else
    obj.sign=1;
  return obj;
}


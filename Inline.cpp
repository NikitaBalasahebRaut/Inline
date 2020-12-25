//program to demonstrate the concept of inline function

#include<iostream>
using namespace std;

class Demo
{
 public:
      inline int add(int,int);
	  int sub(int,int);
};

int Demo::add(int no1,int no2)
{
	return no1+no2;
}
int Demo::sub(int no1,int no2)
{
	return no1-no2;
}
int main()
{
 Demo obj;
 int iRet = 0;
 
 iRet = obj.add(10,4);
 cout<<"Addition is\t"<<iRet<<"\n";
 
 iRet = obj.sub(11,8);
 cout<<"Subtraction is\t"<<iRet<<"\n";

return 0;
}
	  /*
	  output 
	  Addition is     14
      Subtraction is  3
      */
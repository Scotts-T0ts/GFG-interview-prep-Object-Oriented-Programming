#include<iostream>

using namespace std;
class Complex
{
private:
  int real;
  int imag;

public:
  void print ()
  {
    cout << real << "+i" << imag << endl;
  }
  Complex (int r, int i)                 //constructor
  {
    real = r;
    imag = i;
  }

};


int
main ()
{
  Complex c1 (10, 15);      //c1 = object
  c1.print ();
  cout << c1.real;		//won't print as this is private
}

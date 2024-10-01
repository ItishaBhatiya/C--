#include <iostream>
using namespace std;


class X {
  public:
    int a, b, c; 
};


class Y : public X { 
  public:
    void setData(int x, int y, int z) { 
      a = x;
      b = y;
      c = z;
    }
    void getData() { 
      int sum = a*a*a + b*b*b + c*c*c; 
      cout << "The sum of cubes of " << a << ", " << b << " and " << c << " is " << sum << endl; 
    }
};

int main() {
  Y obj; 
  obj.setData(2, 5, 7); 
  obj.getData(); 
  return 0;
}

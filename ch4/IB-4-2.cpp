#include <iostream>
using namespace std;


class P {
  public:
    float t; 
};


class Q : public P { 
  public:
    void Fehrenheit(float c) { 
      t = c;
      float f = (t * 9/5) + 32; 
      cout << t << " Celsius " << f << " Fahrenheit " << endl; 
      t = f; 
    }
};


class R : public Q { 
  public:
    void Kelvin() { 
      float k = (t - 32) * 5/9 + 273.15; 
      cout << t << " Fahrenheit " << k << " Kelvin " << endl;
    }
};

int main() {
  R obj; 
  obj.Fehrenheit(30); 
  obj.Kelvin(); 
  return 0;
}

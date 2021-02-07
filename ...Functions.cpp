#include <iosream>
using namaspace std;


float myDiv(int a, int b) {
    float res = (float) a / b;
    return res;
}

//argc -- arguments count -- number of given arguments
//argv  -- arguments values -- arguments values themselves (given as a pointer to array of arguments)

int main (int argc, char** argv) {

  cout << "Result is " << myDiv(97, 98);
  
  return 0;
}

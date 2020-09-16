#include <iostream>
using namespace std;

int main()
{
int t;
int t1;
int t2;


t1 = 0; t2 = 100; // Intervalul de temperaturi
//t = t1;


while (t <= t2)
{
  cout << t << " " << convers(int, double);
//cout << t << " " << convers(t) << endl;
t += 10;
}
}
double convers(int, double)
{
int t;
double v;
v = 5.0 * (t - 32.0) / 9.0; // Transf. Celsius -> Fahrenheit
return v;
}


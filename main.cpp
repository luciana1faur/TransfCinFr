#include <iostream>
using namespace std;
void main()
{
int t1, t2;
t1 = 0; t2 = 100; // Intervalul de temperaturi
t = t1;
while (t <= t2)
{
cout << t << " " << convers(t) << endl;
t += 10;
}
}
double convers(int t)
{
int t;
double v;
v = 5.0 * (t - 32.0) / 9.0; // Transf. Celsius -> Fahrenheit
return v;
}

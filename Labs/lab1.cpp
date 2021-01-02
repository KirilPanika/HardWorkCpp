#include <iostream>
#include <cmath>

using namespace std; 
const double pi = 3.1415926;

int main() {
    
    
//Primer 1 
double z1, z2, a = 2, x = 5, y = 3, b = 4;
    
z1 = 2 * pow(sin(3 * pi - 2 * a),2) * pow(cos(5 * pi + 2 * a),2);
z2 = 1./4 - 1./4 * sin(5./2 * pi - 8 * a);

cout << "Results No1:\n";
cout <<z1<<endl;
cout <<z2<<endl;

    
//Primer 2
double c1, c2;

c1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
c2 = 2 *  sqrt(2) * cos (a) * sin(pi/4 + 2 * a);

cout << "Results No2:\n";
printf("%lf\n", c1);
printf("%lf\n", c2);

    
//Primer 3
double r1, r2;

r1 = (sin(2 * a) + sin(5 * a) - sin (3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 * a), 2));
r2 = 2 * sin(a);

cout << "Results No3:\n";
printf("%lf\n", r1);
printf("%lf\n", r2);

    
//Primer 4
double h1, h2;

h1 = (sin(2 * a) + sin(5 * a) - sin( 3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));
h2 = tan(3 * a);

cout << "Results No4:\n";
printf("%lf\n", h1);
printf("%lf\n", h2);

    
//Primer 5
double u1, u2;
u1 = 1 - 1/4 * pow(sin(2 * a),2) + cos(2 * a);
u2 = pow(cos(a),2) + pow(cos(a),4);

cout << "Results No5:\n";
printf("%lf\n", u1);
printf("%lf\n", u2);

    
//Primer 6
double f1,f2;
f1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
f2 = 4 * cos(a / 2) * cos(5 / 2 * a) * cos(4 * a);

cout << "Results No6:\n";
printf("%lf\n", f1);
printf("%lf\n", f2);

    
//Primer 7
double n1, n2;

n1 = pow(cos(3./8 * pi - a / 4),2) - pow(cos(11./8 * pi + a / 4),2);
n2 = sqrt(2) / 2 * sin (a / 2);

cout << "Results No7:\n";
printf("%lf\n", n1);
printf("%lf\n", n2);

    
//Primer 8
double m1, m2;
m1 = pow(cos(x),4) + pow(sin(y),2) + 1/4 * pow(sin(2 * x - 1),2);
m2 = sin(y + x) * sin(y - x);

cout << "Results No8:\n";
printf("%lf\n", m1);
printf("%lf\n", m2);

    
//Primer 9
double j1, j2;

j1 = pow(cos(a) - cos(b),2) - pow(sin(a) - sin(b),2);
j2 = -4 * pow(sin((a - b) / 2),2) * cos(a + b);

cout << "Results No9:\n";
cout <<j1<<endl;
cout <<j2<<endl;

return 0;
}

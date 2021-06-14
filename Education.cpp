#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double a;
    double b;
    double c;
    double x;
    cout << "Введите значения a,b,c: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    if((b*b - 4*a*c) >= 0)
    {
       cout << "D =" << b*b-4*a*c << endl;
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "X1 = " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "X2 =  " << x << endl;
    }
    else
    {
        cout << "Дискриминант меньше 0" << endl;
    }
 
    return 0;
}

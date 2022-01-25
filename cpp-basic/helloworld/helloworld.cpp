// #include 문과 #define 문은 모두 선행처리기에 의해 처리되는 선행처리문입니다.


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = a + b + c;
 
    cout << a << " + " << b << " + " << c << " = " << d << endl;
 
    return 0;



};
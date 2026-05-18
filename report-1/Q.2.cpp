//Q.2.Define three variables a, b and c of the double type, then compute and print the value a*b/c.
#include <iostream>
using namespace std;
int main() {
    double a;
    double b;
    double c;
    double Result;
    cout<<"Input First Number/a : ";
    cin>>a;
    cout<<"Input Second Number/b : ";
    cin>>b;
    cout<<"Input Third Number/c : ";
    cin>>c;
    Result = (a*b) / c ;
    cout<<"Using the Formula a*b/c, The Result is "<<Result<<endl;
    return 0;
}
//Q.3. 3.Input a user’s first name, last name, and age, and output the whole information. 
#include <iostream>
using namespace std;
int main() {
    string fname;
    string lname;
    int age;
    
    cout<<"input user's first name : ";
    cin>>fname;
    cout<<"Input user's last name : ";
    cin>>lname;
    cout<<"Input user's age : ";
    cin>>age;
    cout<<"Here's the result :"<<endl<<"Name : "<<fname <<lname<<endl<<"Age : "<<age;
    
    return 0;
}
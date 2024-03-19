#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    string city;

    cout<<"Enter you age:";
    cin>>age;
    cin.ignore();

    cout<<"Enter your city:";
    getline(cin,city);

    cout<<"Age: "<<age<<endl;
    cout<<"City: "<<city<<endl;
}
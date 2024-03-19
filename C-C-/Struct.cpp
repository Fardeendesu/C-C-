#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    int age;
    float height;
};

    int main(){
        Person person1;

        person1.name="Harshadeep Bhaduri";
        person1.age=02;
        person1.height=4.20;

        std::cout <<"Name: "<< person1.name <<std::endl;
        std::cout<<"Age: "<<person1.age <<std::endl;
        cout<<"Height "<<person1.height<<"cm"<<endl;
        return 0;
    }
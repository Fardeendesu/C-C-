#include <iostream>

int main(){
    auto add =[](int a, int b) -> int {
        return a+b;
    };

    using namespace std;
    cout<<"Sum: "<<add(5,3) <<endl;

    return 0;
}
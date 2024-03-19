#include <iostream>
#include <string>

using namespace std;

struct Book{
    string title;
    string author;
    int year;   
};
    int main(){
        const int Max_Books=3;
        Book books[Max_Books];

        for (int i=0; i<Max_Books;++i){
            cout<<"Enter book #"<<(i+1)<<" information:"<<endl;
            cout<<"Title:";
            getline(cin,books[i].title);
            cout<<"Author:";
            getline(cin,books[i].author);
            cout<<"Year:";
        
            cin>>books[i].year;
            cin.ignore();
        }
        cout<<"Book Inventory:"<<endl;
        for(int i=0;i<Max_Books;++i){
            cout<<"Book #"<<(i+1)<<":"<<endl;
            cout<<"Title: "<<books[i].title<<endl;
            cout<<"Author: "<<books[i].author<<endl;
            cout<<"Year: "<<books[i].year<<endl;
        }
        return 0;
    }
#include <stdio.h>
using namespace std;
#include <bits/stdc++.h>

class Human{
    public:
    string Humanname;
    int id;

    void printname();

    void printid();
    {
        cout<< "Human id is: " <<id;
    }
}
void Human::printname(){
    cout<< "Human name is: "<<Humanname;
}
int main()
{
    Human obj1;
    obj1.Humanname="Prajwal";
    obj1.id=15;

    obj1.printname();
    cout<<endl;

    obj1.printid();
    return 0;
}

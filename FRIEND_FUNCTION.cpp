
#include <iostream>
#include <string>
using namespace std;
class calculate{
private:
    string name = "Rabby Hasan Riaz";


    friend void riaz(calculate &riazObj);

};
void riaz(calculate  &riazObj){


    cout<<"My name = "<< riazObj.name;
    
    
}



int main() {
    calculate myob;
    riaz(myob);

    return 0;

}



//Friend Function by Rabby hasan Riaz 

//11 November 2024
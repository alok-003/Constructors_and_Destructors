//Name:Alok Chawat
//PRN:23070123016
//Aim:Implemention of Constructors and Destructors to perform Default Constructor

#include <iostream>
using namespace std;
class construct{
    public:
    int a,b;

construct(){
    a = 10;
    b = 20;
}
void display()
{
cout << "a = "<< a <<endl<< "b = "<<b;
}
};

int main() {
    construct constructor;
    constructor.display();
    

    return 0;
}


/*Output:
a = 10
b = 20
*/
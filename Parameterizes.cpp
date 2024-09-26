//Name:ALok Chawat
//PRN:23070123016
//Aim:Implemention of Constructors and Destructors to perform Parameterizes

#include <iostream>
using namespace std;

class Construct {
    int a;
    int b;
public:
    Construct(int m , int n) {
        a = m;
        b = n;
    }
    void display() 
    {
        cout << "a = "<< a <<endl;
        cout << "b = " << b <<endl;
    }
};

int main() {
    Construct numbers(10,20);
    numbers.display();

    return 0;
}


/*Output:
a = 10
b = 20
*/
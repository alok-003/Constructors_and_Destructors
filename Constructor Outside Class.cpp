//Name:Alok Chawat
//PRN:23070123038
//Aim:Implemention of Constructors and Destructors to Define Constructor Outside Class

#include <iostream>
using namespace std;

class Student {
    int rno;
    char name[50];
    double fee;
public:
    Student();
    void display();
};

Student::Student() {
    cout << "Enter the Roll number: ";
    cin >> rno;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the fee: ";
    cin >> fee;
}

void Student::display() 
{
    cout << endl << rno << endl << name << endl << fee << endl;
}

int main() {
    Student s;
    s.display();
    return 0;
}


/*Output:
Enter the Roll number: 16
Enter the name: Alok
Enter the fee: 156000

16
Alok
156000*/
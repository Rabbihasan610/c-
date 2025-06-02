// copy constractor
#include <iostream>
using namespace std;
using std::string;

class Employee{
    public:
        int id;
        string department;
        Employee(string empId, string empDep){
            this->id = atoi(empId.c_str());
            this->department = empDep;
        }
        void display(){
            cout << "=================================== Employee Class =====================================" << endl;
            cout << "ID: " << this->id << endl;
            cout << "Department: " << this->department << endl;
        }
};




int main(){
    Employee e1("1", "IT");
    e1.display();


    Employee e2(e1);
    e2.display();

    Employee e3 = e1;
    e3.display();
    return 0;
}
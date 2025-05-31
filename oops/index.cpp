#include <iostream>
using namespace std;
using std::string;



class Person
{
    public:
        string name;
        int age;

    // use setter and getter

    void setName(string n){
        name = n;
    }


    string getName(){
        return name;
    }
    
    void display(){
        cout << "===================================Person Class=====================================" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};



class Employee : public Person
{
    public:
        int id;
        string department;

    private:
        string password;
        double salary;

    // setters

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }

    void display(){
        cout << "=================================== Employee Class =====================================" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};



class Teacher : public Employee
{
    public:
        string subject;


    Teacher(string n, int a, int i, string d, string s){
        name = n;
        age = a;
        id = i;
        department = d;
        subject = s;
    }

    void display(){
        cout << "=================================== Teacher Class =====================================" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
    }
};



class Student : public Employee
{
    public:
        string course;


    Student(string n, int a, int i, string d, string c){
        name = n;
        age = a;
        id = i;
        department = d;
        course = c;
    }

    void display(){
        cout << "=================================== Student Class =====================================" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Course: " << course << endl;
    }
};




int main() {

    Teacher t1("Md Rabbi Hasan", 20, 1001, "CSE", "C++");
    t1.display();

    Student s1("Md Rabbi Hasan", 20, 1001, "CSE", "C++");
    s1.display();

    return 0;
}
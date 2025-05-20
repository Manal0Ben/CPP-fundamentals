#include <iostream>
#include <vector>
using namespace std;
// Base class
class Person {
protected:
 string name;
 int age;
public:
 Person(string n, int a) : name(n), age(a) {}
 virtual void display() {
 cout << "Name: " << name << ", Age: " << age << endl;
 }
};
// Derived class
class Student : public Person {
private:
 int id;
 float grade;
public:
 Student(string n, int a, int i, float g)
 : Person(n, a), id(i), grade(g) {}
 // Setters
 void setGrade(float g) {
 if (g >= 0 && g <= 100)
 grade = g;
 }
 // Getters
 float getGrade() {
 return grade;
 }
 void display() override {
 cout << "Student ID: " << id << ", ";
 Person::display();
 cout << "Grade: " << grade << endl;
 }
};
// Management system
class StudentManager {private:
 vector<Student> students;
public:
 void addStudent(const Student& s) {
 students.push_back(s);
 }
 void showAll() {
 for (auto& s : students)
 s.display();
 }
};
int main() {
 StudentManager manager;
 Student s1("Alice", 20, 101, 88.5);
 Student s2("Bob", 22, 102, 92.3);
 manager.addStudent(s1);
 manager.addStudent(s2);
 manager.showAll();
 return 0;
}
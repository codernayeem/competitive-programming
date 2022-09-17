#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age, salary;
        Person(){};
        Person(string name, int age, int salary){
            this->name = name;
            this->age = age;
            this->salary = salary;
        }

        void printDetails(){
            cout << "Name : " << this->name << "\t Age : " << this->age << "\t Salary : " << this->salary << endl;
        }

        bool operator > (Person &p){
            return this->age > p.age;
        }

        bool operator < (Person &p){
            return this->age < p.age;
        }
};

void selectionSortPersonsByAge(Person persons[], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            if (persons[j].age < persons[i].age)
                swap(persons[j], persons[i]);
        }
    }
}

void selectionSortPersonsByName(Person persons[], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            if (persons[j].name < persons[i].name)
                swap(persons[j], persons[i]);
        }
    }
}

bool comparePersonSalary(Person &p1, Person &p2){
    return p1.salary < p2.salary;
}

int main()
{
    string names[] = {"Khalid", "Robi", "Asif", "Sami", "Sabbir", "Hossen"};
    int ages[] = {24, 65, 32, 24, 25, 23};
    int salary[] = {19000, 35000, 20000, 25000, 19000, 26000};

    int c = sizeof(ages) / sizeof(ages[0]);
    Person persons[c] ;
    for (int i = 0; i < c; i++){
        persons[i].name = names[i];
        persons[i].age = ages[i];
        persons[i].salary = salary[i];
    }
    
    cout << "-----------------------------------------------" << endl;
    for (int i = 0; i < c; i++) persons[i].printDetails();
    cout << "-----------------------------------------------" << endl;

    // sorting

    selectionSortPersonsByName(persons, c);
    for (int i = 0; i < c; i++) persons[i].printDetails();
    cout << "-----------------------------------------------" << endl;
    
    selectionSortPersonsByAge(persons, c);
    for (int i = 0; i < c; i++) persons[i].printDetails();
    cout << "-----------------------------------------------" << endl;
    
    sort(persons, persons+c); // will work if we do operator overlodding
    for (int i = 0; i < c; i++) persons[i].printDetails();
    cout << "-----------------------------------------------" << endl;

    sort(persons, persons+c, comparePersonSalary);
    for (int i = 0; i < c; i++) persons[i].printDetails();
    cout << "-----------------------------------------------" << endl;

}

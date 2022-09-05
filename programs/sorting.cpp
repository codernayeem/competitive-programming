#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
        Person(){};
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }

        void printDetails(){
            cout << "Name : " << this->name << "\t Age : " << this->age << endl;
        }
};

template <class T>
void print_arr(T a, int size){
    cout << endl << "[ ";
    for (int i = 0; i < size; i++)
        cout << a[i] << ' ';
    cout << ']' << endl;
    
}

void selectionSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            // use '>' to get inverse sort
            // if (arr[j] > arr[i]){
            if (arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
}

void bubbleSort(int arr[], int n){
    if (n == 0 || n == 1)
        return;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    bubbleSort(arr, n - 1);
}

void selectionSortPersons(Person persons[], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            if (persons[j].age < persons[i].age){
                swap(persons[j], persons[i]);
            }
        }
    }
}

void sortArrays(){
    cout << endl << "Sort Arrays" << endl;

    int arr[] = {5, 8, 9, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr, n);

    // different sorting techniqes
    sort(arr, arr + n);
    // selectionSort(arr, n);
    // bubbleSort(arr, n);

    print_arr(arr, n);
}

void sortObjects(){
    cout << endl << "Sort Objects" << endl << endl;
    string names[] = {"Asif", "Robi", "Khalid", "Sami", "Sabbir", "Hossen"};
    int ages[] = {42, 65, 32, 14, 25, 23};
    int count = sizeof(ages) / sizeof(ages[0]);
    Person persons[count] ;
    for (int i = 0; i < count; i++){
        persons[i].name = names[i];
        persons[i].age = ages[i];
    }
    
    for (int i = 0; i < count; i++)
        persons[i].printDetails();

    // sorting ages
    cout << "Sorting" << endl;
    selectionSortPersons(persons, count);

    for (int i = 0; i < count; i++)
        persons[i].printDetails();
}

int main()
{
    // sortArrays();
    sortObjects();
}

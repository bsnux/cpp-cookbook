/*
 * C++11 simple cookbook
 */
#include <fstream>
#include <iostream>
#include <map>
#include <vector>
#include <employee.h>
using namespace std;

void swapNumbers(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    // Hello World!
    cout << "Hello World!" << endl;

    // Pointers and references
    int *test;
    int a = 3;
    test = &a;
    cout << *test << endl;

    int *b = new int;
    *b = 22;
    delete b;

    string food = "tacos";
    const string &meal = food;
    cout << meal << endl;

    // Structs
    struct Persona {
        int age;
        string name;
        string last;
    };
    Persona p;

    p.age = 23;
    p.name = "John";
    p.last = "Smith";

    cout << p.age << endl;
    cout << p.last + ", " + p.name << endl;

    Persona *pp = new Persona;
    pp->age = 32;

    cout << pp->age << endl;
    delete (pp);

    // Vectors
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    for (const int &i : v) {
        cout << i << ", ";
    }
    cout << endl;
    v.at(0) = 3;
    cout << v[0] << endl;
    cout << "Size: " << v.size() << endl;

    // Maps
    map<string, int> myHash;
    myHash["one"] = 1;
    myHash["two"] = 2;
    cout << "value for key" << myHash["two"] << endl;
    for (map<string, int>::iterator item = myHash.begin(); item != myHash.end(); ++item) {
        cout << "key: " << item->first << ", value: " << item->second << endl;
    }

    // Files
    const char *fileName = "/tmp/test.txt";
    ofstream fw(fileName);
    fw << "Line one" << endl;
    fw << "Line two" << endl;
    fw.close();

    ifstream fr(fileName);
    string line;
    while (getline(fr, line)) {
        cout << line << endl;
    }
    fr.close();

    // Functions
    int xx = 1;
    int yy = 2;
    swapNumbers(xx, yy);
    cout << "x: " << xx << ", y: " << yy << endl;

    // `Employee` lib
    Employee ee = Employee("John", "Smith");
    ee.setDepartment("Financial");
    cout << ee.getName() << endl;
    cout << "Department: " << ee.getDepartment() << endl;

    return 0;
}

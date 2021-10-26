#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

/**
    * Writing the function for the student objects...
    * using some parametes as an private...
    * @age , @first_name , @last_name , @standar are the default paramters...
    * using setter and getter methods for the classs....
    */

class Student {
private:
    /// Default parametes or values of the class and student object types...
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    /// <Setter Method >
    void set_age(int age);
    void set_first_name(string first_name);
    void set_last_name(string last_name);
    /// <Getter Method >
    void set_standard(int standard);
    int get_age();
    string get_first_name();
    string get_last_name();
    int get_standard();
    /// <Function of the Class>

    string to_string();
};
/// Implement the function outside the class as an escope resolution...
void Student::set_age(int age) {
    this->age = age;
}
void Student::set_first_name(string first_name) {
    this->first_name = first_name;
}

void Student::set_last_name(string last_name) {
    this->last_name = last_name;
}

void Student::set_standard(int standard) {
    this->standard = standard;
}

int Student::get_age() {
    return age;
}
string Student::get_first_name() {
    return first_name;
}

string Student::get_last_name() {
    return last_name;
}

int Student::get_standard() {
    return standard;
}

string Student::to_string() {
    stringstream s; /// using the stringstream as an instrucion of the task
    char c = ',';
    s << get_age() << c << get_first_name() << c << get_last_name() << c << get_standard();
    return s.str(); /// changing the stream to string 
}

int main() {
    int age, standard; /// defining the varaibles
    string first_name, last_name; /// defining the string variables...

    cin >> age >> first_name >> last_name >> standard; /// getting variables as an input...

    Student st; /// Making an object of the as type student...
    /// <Setter Method>
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    /// <Getter Method>
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

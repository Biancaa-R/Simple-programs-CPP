/*f.      A CollegeCourse class includes fields representing department, course number, credit hours, and tuition. 
Its child, Labcourse, includes one more field that holds a lab fee charged in addition to the tuition.
 Create appropriate functions for these classes, and write a main () function that instantiates and uses object of each class.  */

# include <iostream>
using namespace std;

class CollegeCourse{

    public:
    string department;
    int course_num;
    int credit;
    int credit_hours;
    float tuition;

    CollegeCourse()
    {
    cout << "Enter department: ";
    cin >> department;

    cout << "Enter course number: ";
    cin >> course_num;

    cout << "Enter credit: ";
    cin >> credit;

    cout << "Enter credit hours: ";
    cin >> credit_hours;

    cout << "Enter tuition: ";
    cin >> tuition;
    }

    void display()
    {
            // Output using cout
    cout << "\nDepartment: " << department << endl;
    cout << "Course Number: " << course_num << endl;
    cout << "Credit: " << credit << endl;
    cout << "Credit Hours: " << credit_hours << endl;
    cout << "Tuition: " << tuition << endl;
    }
};

class Labcourse: public CollegeCourse{

    public:
    float lab_fee;

    Labcourse()
    {
            
    cout << "Enter department: ";
    cin >> department;

    cout << "Enter course number: ";
    cin >> course_num;

    cout << "Enter credit: ";
    cin >> credit;

    cout << "Enter credit hours: ";
    cin >> credit_hours;

    cout << "Enter tuition: ";
    cin >> tuition;
    
    cout <<" Enter the lab fee";
    cin>>lab_fee;
    }

    void display()
    {
            // Output using cout
    cout << "\nDepartment: " << department << endl;
    cout << "Course Number: " << course_num << endl;
    cout << "Credit: " << credit << endl;
    cout << "Credit Hours: " << credit_hours << endl;
    cout << "Tuition: " << tuition << endl;
    cout<<"Lab fee s: "<<lab_fee<<endl;
    }
};

int main()
{
    CollegeCourse c1;
    fflush(stdin);
    c1.display();
    Labcourse l1;
    fflush(stdin);
    l1.display();
}
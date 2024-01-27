#include <iostream>
using namespace std;

struct studdata {
    int reg;
    string name;
    string dob;
    float m1, m2, m3;
    float total;
    float avg;
    char grade;
};

int main() {
    int num;
    cout << "Enter the number of students: ";
    cin >> num;

    studdata *arr1= new studdata[num];

    for (int i = 0; i < num; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Registration number: ";
        cin >> arr1[i].reg;

        cout << "Name: ";
        cin >> arr1[i].name;

        cout << "Date of Birth: ";
        cin >> arr1[i].dob;

        cout << "Marks in three subjects (m1 m2 m3): ";
        cin >> arr1[i].m1 >> arr1[i].m2 >> arr1[i].m3;

        // Calculate total and average
        arr1[i].total = arr1[i].m1 + arr1[i].m2 + arr1[i].m3;
        arr1[i].avg = arr1[i].total / 3.0;

        // Determine the grade
        if (arr1[i].avg >= 90) {
            arr1[i].grade = 'A';
        } else if (arr1[i].avg >= 80) {
            arr1[i].grade = 'B';
        } else if (arr1[i].avg >= 70) {
            arr1[i].grade = 'C';
        } else if (arr1[i].avg >= 60) {
            arr1[i].grade = 'D';
        } else {
            arr1[i].grade = 'F';
        }
    }

    // Display student details
    cout << "\nStudent Details:\n";
    for (int i = 0; i < num; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Registration number: " << arr1[i].reg << endl;
        cout << "Name: " << arr1[i].name << endl;
        cout << "Date of Birth: " << arr1[i].dob << endl;
        cout << "Total Marks: " << arr1[i].total << endl;
        cout << "Average Marks: " << arr1[i].avg << endl;
        cout << "Grade: " << arr1[i].grade << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 50;

// Declaration of arrays
int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];

// Function to collect user input for student data
void inputStudentData(int numOfStudents) {
    for (int i = 0; i < numOfStudents; ++i) {
        cout << "Enter details for student #" << i + 1 << ":\n";
        cout << "Student ID: ";
        cin >> studentID[i];

        cout << "Student Name: ";
        cin >> studentName[i];

        cout << "Scores: ";
        cin >> scores[i];

        cout << "Attendance (%): ";
        cin >> attendance[i];
    }
}
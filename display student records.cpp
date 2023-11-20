#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 50;

// Declaration of arrays
int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];


// Function to display all student records
void displayStudentRecords(int numOfStudents, double averageScores) {
    cout << "\nStudent Records:\n";
    cout << "--------------------------------------------------\n";
    cout << "ID\tName\t\tScores\tAttendance\n";
    cout << "--------------------------------------------------\n";

    for (int i = 0; i < numOfStudents; ++i) {
        cout << studentID[i] << "\t" << studentName[i] << "\t\t"<< scores[i] << "\t" << attendance[i] << "%\n";
    }

    cout << "--------------------------------------------------\n";
    cout << "Average Scores: " << averageScores << "\n\n";
}
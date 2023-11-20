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

// Function to calculate the average scores for all students
double calculateAverageScores(int numOfStudents) {
    double totalScores = 0;
    for (int i = 0; i < numOfStudents; ++i) {
        totalScores += scores[i];
    }
    return (numOfStudents > 0) ? (totalScores / numOfStudents) : 0;
}

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

int main() {
    int numOfStudents;

    cout << "Enter the number of students (up to " << MAX_STUDENTS << "): ";
    cin >> numOfStudents;
    
    if (numOfStudents > 0 && numOfStudents <= MAX_STUDENTS) {
        // Function calls
        inputStudentData(numOfStudents);
        double averageScores = calculateAverageScores(numOfStudents);
        displayStudentRecords(numOfStudents, averageScores);
    } else {
        cout << "Invalid number of students. Please run the program again.\n";
    }

    return 0;
}